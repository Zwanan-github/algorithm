/*
  @pintia psid=994805260223102976 pid=994805306310115328 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1016 部分A+B
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805306310115328
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    string d_a, d_b;
    char a, b;
    cin >> d_a >> a >> d_b >> b;
    map<char, int> ma, mb;
    for (int i = 0; i < d_a.size(); ++i) {
        ma[d_a[i]]++;
    }
    for (int i = 0; i < d_b.size(); ++i) {
        mb[d_b[i]]++;
    }
    int ans = 0;
    while (ma[a] > 0) {
        ans += pow(10, ma[a] - 1) * (a - '0');
        ma[a]--;
    }
    while (mb[b] > 0) {
        ans += pow(10, mb[b] - 1) * (b - '0');
        mb[b]--;
    }
    cout << ans;
    return 0;
}


// @pintia code=end