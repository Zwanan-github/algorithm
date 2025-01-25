/*
  @pintia psid=994805260223102976 pid=994805305181847552 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1017 A除以B
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805305181847552
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    string a;
    int b;
    cin >> a >> b;
    string cur = "";
    string q = "";
    for (int i = 0; i < a.size(); ++i) {
        cur += a[i];
        int n = stoi(cur);
        q += to_string(n / b);
        cur = to_string(n % b);
    }
    cout << (q[0] == '0' && q.size() > 1 ? q.substr(1, q.size() - 1) : q) << " " << stoi(cur);
    return 0;
}


// @pintia code=end