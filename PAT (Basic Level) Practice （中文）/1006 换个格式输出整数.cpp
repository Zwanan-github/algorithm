/*
  @pintia psid=994805260223102976 pid=994805318855278592 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1006 换个格式输出整数
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805318855278592
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    int B = n / 100, S = (n - B * 100) / 10, G = n % 10;
    while (B--) cout << "B";
    while (S--) cout << "S";
    for (int i = 1; i <= G; ++i) cout << i;
    return 0;
}

// @pintia code=end