/*
  @pintia psid=994805260223102976 pid=1729419194675666947 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1124 最近的斐波那契数
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=1729419194675666947
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;


long long N;
long long fib[50];

int main(int argc, char const* argv[])
{
    cin >> N;
    memset(fib, 0, 50 * sizeof(long long));
    fib[0] = 0, fib[1] = 1;
    int i = 0;
    for (i = 2; fib[i - 1] < N; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];
    if (abs(fib[i - 2] - N) <= abs(fib[i - 1] - N)) {
        cout << fib[i - 2];
    }
    else cout << fib[i - 1];
    return 0;
}

// @pintia code=end