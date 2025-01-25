/*
  @pintia psid=994805260223102976 pid=994805308755394560 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1014 福尔摩斯的约会
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805308755394560
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

vector<string> days = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

int main(int argc, char const* argv[])
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int cnt = 0;
    for (int i = 0; i < s1.size() && i < s2.size(); ++i) {
        if (s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i] && cnt == 0) {
            cout << days[s1[i] - 'A'] << " ";
            cnt = 1;
        }
        else if (s1[i] == s2[i] && (s1[i] >= '0' && s1[i] <= '9' || s1[i] >= 'A' && s1[i] <= 'N') && cnt == 1) {
            printf("%02d:", ((s1[i] >= 'A') ? (s1[i] - 'A' + 10) : (s1[i] - '0')));
            break;
        }
    }
    for (int i = 0; i < s3.size() && i < s4.size(); ++i) {
        if (s3[i] == s4[i] && (s3[i] >= 'a' && s3[i] <= 'z' || s3[i] >= 'A' && s3[i] <= 'Z')) {
            printf("%02d", i);
        }
    }
    return 0;
}

// @pintia code=end