/*
  @pintia psid=994805260223102976 pid=1729419194675666944 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1121 祖传好运
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=1729419194675666944
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;

    function<string(int)> check = [&](long long num) {
        string str = to_string(num);
        for (int i = 1; i <= str.length(); ++i) {
            if ((stoi(str.substr(0, i)) % i) != 0) return "No";
        }
        return "Yes";
        };

    while (n--) {
        long long num;
        cin >> num;
        cout << check(num) << endl;
    }
    return 0;
}

// @pintia code=end