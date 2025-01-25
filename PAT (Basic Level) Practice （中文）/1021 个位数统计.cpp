/*
  @pintia psid=994805260223102976 pid=994805300404535296 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1021 个位数统计
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805300404535296
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int>> cnts(10);

int main(int argc, char const* argv[])
{
  for (int i = 0; i <= 9; ++i) {
    cnts[i] = { i, 0 };
  }
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    cnts[s[i] - '0'].second++;
  }
  for (int i = 0; i < 10; ++i) {
    if (cnts[i].second > 0) {
      cout << cnts[i].first << ":" << cnts[i].second << endl;
    }
  }
  return 0;
}

// @pintia code=end