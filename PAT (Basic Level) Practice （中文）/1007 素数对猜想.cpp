/*
  @pintia psid=994805260223102976 pid=994805317546655744 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1007 素数对猜想
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805317546655744
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

vector<int> pri;
vector<bool> not_prime(100010, false);

// 素数筛, 时间复杂度O(n)
void pre(int n) {
    for (int i = 2; i <= n; ++i) {
        if (!not_prime[i]) {
            pri.push_back(i);
        }
        for (int p : pri) {
            if (i * p > n) break;
            not_prime[i * p] = true;
            if (i % p == 0) break;
        }
    }
}

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    pre(n);
    int ans = 0;
    for (int i = 0; i < pri.size() - 1; ++i) {
        ans += (pri[i + 1] - pri[i] == 2);
    }
    cout << ans;
    return 0;
}

// @pintia code=end