/*
  @pintia psid=994805260223102976 pid=994805313708867584 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1010 一元多项式求导
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805313708867584
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int k, n;
    int cnt = 0;
    while (cin >> k >> n) {
        if (n != 0) {
            if (cnt != 0) cout << " ";
            cout << k * n << " " << n - 1;
            ++cnt;
        }
    }
    if (cnt == 0) cout << "0 0";
    return 0;
}

// @pintia code=end