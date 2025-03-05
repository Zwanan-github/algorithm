/*
  @pintia psid=994805260223102976 pid=1697150941050929156 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1120 买地攻略
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=1697150941050929156
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;
long long n, m;
long long price[10010];
long long cnt = 0;
int ans = 0;
int main(int argc, char const* argv[])
{
    cin >> n >> m;
    for (int i = 1, j = 1; i <= n; ++i) {
        cin >> price[i];
        cnt += price[i];
        while (j <= i && cnt > m)
            cnt -= price[j++];
        if (cnt <= m) ans += i - j + 1;
    }
    cout << ans;
    return 0;
}

// @pintia code=end