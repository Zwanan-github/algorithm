/*
  @pintia psid=994805260223102976 pid=994805323154440192 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1003 我要通过！
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805323154440192
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

void solve(string s) {
    int n = s.size();
    map<char, int> m;
    int p = 0, t = 0;
    for (int i = 0; i < n; ++i) {
        m[s[i]]++;
        if (s[i] == 'P') p = i;
        if (s[i] == 'T') t = i;
    }
    if (m['P'] == 1 && m['T'] == 1 && m['A'] != 0 && m.size() == 3 && p != t - 1 && p * (t - p - 1) == n - t - 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}

// @pintia code=end