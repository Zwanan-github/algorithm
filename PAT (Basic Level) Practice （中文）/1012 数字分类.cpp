/*
  @pintia psid=994805260223102976 pid=994805311146147840 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1012 数字分类
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805311146147840
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    int A1 = 0, A2 = 0, A2_count = 0, A3 = 0, A5 = 0;
    double A4 = 0, A4_count = 0;
    int A2_flag = 1;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if ((x % 5 == 0) && ((x & 1) == 0)) A1 += x;
        if ((x % 5 == 1)) {
            A2 += A2_flag * x;
            A2_flag *= -1;
            A2_count ++;
        }
        if ((x % 5 == 2)) {
            A3++;
        }
        if ((x % 5 == 3)) {
            A4 += x, A4_count++;
        }
        if (x % 5 == 4) A5 = max(A5, x);
    }
    printf("%s ", ((A1 == 0) ? "N" : to_string(A1).c_str()));
    printf("%s ", ((A2_count == 0) ? "N" : to_string(A2).c_str()));
    printf("%s ", ((A3 == 0) ? "N" : to_string(A3).c_str()));
    if (A4_count == 0) {
        printf("N ");
    }
    else {
        printf("%.1f ", A4 / A4_count);
    }
    printf("%s", (A5 == 0) ? "N" : to_string(A5).c_str());

    return 0;
}

// @pintia code=end