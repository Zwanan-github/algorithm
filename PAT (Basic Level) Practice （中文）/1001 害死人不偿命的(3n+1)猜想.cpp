/*
  @pintia psid=994805260223102976 pid=994805325918486528 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1001 害死人不偿命的(3n+1)猜想
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805325918486528
*/
// @pintia code=start
#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n, res = 0;
    cin >> n;
    while (n != 1) {
        if (n & 1) n = (3 * n + 1) >> 1;
        else n = n >> 1;
        ++res;
    }
    cout << res;
    return 0;
}
// @pintia code=end