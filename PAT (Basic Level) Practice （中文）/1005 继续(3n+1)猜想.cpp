/*
  @pintia psid=994805260223102976 pid=994805320306507776 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1005 继续(3n+1)猜想
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805320306507776
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    vector<bool> vis(101, false);
    vector<int> nums;
    priority_queue<int> ans;
    while (n--) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    for (auto x : nums) {
        // 把 vis 所有元素初始化改成false
        fill(vis.begin(), vis.end(), false);
        for (auto y : nums) {
            int t = y;
            while (t != 1) {
                t = ((t & 1) ? ((3 * t + 1) >> 1) : (t >> 1));
                if (t < 100) {
                    vis[t] = true;
                }
            }
        }
        if (!vis[x]) {
            ans.push(x);
        }
    }
    while (!ans.empty()) {
        cout << ans.top() << ((ans.size() == 1) ? "" : " ");
        ans.pop();
    }
    return 0;
}

// @pintia code=end