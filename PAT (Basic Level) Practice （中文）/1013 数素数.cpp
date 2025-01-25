/*
  @pintia psid=994805260223102976 pid=994805309963354112 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1013 数素数
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805309963354112
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

vector<int> pri;
vector<bool> not_prime(1000000, false);

int main(int argc, char const* argv[])
{
    int m, n, flag = 0;
    cin >> m >> n;
    for (int i = 2; pri.size() <= n; ++i) {
        if (!not_prime[i]) {
            pri.push_back(i);
        }
        for (int p : pri) {
            if (p * i > 1000000) break;
            not_prime[i * p] = true;
            if (i % p == 0) break;
        }
    }
    for (int i = m - 1; i <= n - 1; ++i) {
        cout << pri[i] << (((i - (m - 1) + 1) % 10 == 0) ? "\n" : (i == n - 1 ? "" : " "));
    }
    return 0;
}

// @pintia code=end