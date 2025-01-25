/*
  @pintia psid=994805260223102976 pid=994805302786899968 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1019 数字黑洞
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805302786899968
*/
// @pintia code=start
#include<bits/stdc++.h>

int main(int argc, char const* argv[])
{
  std::string n;
  std::cin >> n;
  n.insert(0, 4 - n.size(), '0');

  do {
    std::sort(n.begin(), n.end());
    std::string s = n;
    std::reverse(s.begin(), s.end());
    std::string t = std::to_string(stoi(s) - stoi(n));
    // 前置0
    t.insert(0, 4 - t.size(), '0');
    std::cout << s << " - " << n << " = " << t << std::endl;
    n = t;
  } while ((n.compare("6174") != 0 && n.compare("0000") != 0));
  return 0;
}

// @pintia code=end