/*
  @pintia psid=994805260223102976 pid=994805321640296448 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1004 成绩排名
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805321640296448
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

typedef struct {
    string name, id;
    int grade;
} Stu;

int main(int argc, char const* argv[]) {
    int n;
    cin >> n;
    vector<Stu> stus;
    while (n--) {
        Stu stu;
        cin >> stu.name >> stu.id >> stu.grade;
        stus.push_back(stu);
    }
    auto cmp1 = [&](Stu a, Stu b)
        {
            return a.grade > b.grade;
        };
    Stu max_stu = *max_element(stus.begin(), stus.end(), cmp1);
    Stu min_stu = *min_element(stus.begin(), stus.end(), cmp1);
    cout << min_stu.name << " " << min_stu.id << endl;
    cout << max_stu.name << " " << max_stu.id << endl;
    return 0;
}

// @pintia code=end