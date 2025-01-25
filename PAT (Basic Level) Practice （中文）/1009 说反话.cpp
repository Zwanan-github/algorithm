/*
  @pintia psid=994805260223102976 pid=994805314941992960 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1009 说反话
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805314941992960
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    string s;
    getline(cin, s);
    vector<string> words;
    int pre = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            words.push_back(s.substr(pre, i - pre));
            pre = i + 1;
        }
        else if (i == s.size() - 1) {
            words.push_back(s.substr(pre, i - pre + 1));
        }
    }
    for (int i = words.size() - 1; i >= 0; --i)
        cout << words[i] << (i == 0 ? "" : " ");
    return 0;
}

// @pintia code=end