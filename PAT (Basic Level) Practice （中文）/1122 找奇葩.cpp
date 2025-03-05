/*
  @pintia psid=994805260223102976 pid=1729419194675666945 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1122 找奇葩
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=1729419194675666945
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

map<int, int> cnt;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    while (n--) {
        int num;
        cin >> num;
        if (num & 1) {
            cnt[num] += 1;
        }
    }
    for (auto [k, v] : cnt) {
        if (v & 1) {
            cout << k << endl;
            return 0;
        }
    }
    return 0;
}
// @pintia code=end