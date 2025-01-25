/*
  @pintia psid=994805260223102976 pid=994805324509200384 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1002 写出这个数
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805324509200384
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

vector<string> chinese_map = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };

int main()
{
    string n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n.size(); ++i) {
        res += n[i] - '0';
    }
    string s = to_string(res);
    // 但一行中最后一个拼音数字后没有空格。 fuck fuck fuck 
    for (int i = 0; i < s.size(); ++i) {
        cout << chinese_map[s[i] - '0'] << ((i == s.size() - 1) ? "" : " ");
    }
    return 0;
}

// @pintia code=end