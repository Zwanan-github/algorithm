/*
  @pintia psid=994805260223102976 pid=994805316250615808 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1008 数组元素循环右移问题
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805316250615808
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int>& nums, int l, int r) {
    while (l < r) {
        swap(nums[l], nums[r]);
        ++l, --r;
    }
}

int main(int argc, char const* argv[])
{
    int n, idx;
    cin >> n >> idx;
    idx = idx % n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    reverse(nums, 0, n - 1);
    reverse(nums, 0, idx - 1);
    reverse(nums, idx, n - 1);
    for (int i = 0; i < n; ++i) cout << nums[i] << (i == nums.size() - 1 ? "" : " ");
    return 0;
}

// @pintia code=end