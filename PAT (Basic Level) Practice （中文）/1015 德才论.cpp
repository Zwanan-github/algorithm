/*
  @pintia psid=994805260223102976 pid=994805307551629312 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1015 德才论
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805307551629312
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

struct Stu
{
    int id, de, cai;
    int operator<(const Stu& a) const {
        if (de + cai != a.de + a.cai) return de + cai < a.de + a.cai;
        if (de != a.de) return de < a.de;
        return id > a.id;
    }
};


int main(int argc, char const* argv[])
{
    int N, L, H;
    cin >> N >> L >> H;
    priority_queue<Stu> de_and_cai;
    priority_queue<Stu> de_sheng_cai;
    priority_queue<Stu> sheng_de_sheng_cai;
    priority_queue<Stu> others;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        Stu stu;
        cin >> stu.id >> stu.de >> stu.cai;
        if (stu.de < L || stu.cai < L) continue;
        if (stu.de >= H && stu.cai >= H) de_and_cai.push(stu);
        else if (stu.de >= H && stu.cai < H) de_sheng_cai.push(stu);
        else if (stu.de < H && stu.cai < H && stu.de >= stu.cai) sheng_de_sheng_cai.push(stu);
        else others.push(stu);
        cnt++;
    }
    cout << cnt << endl;
    while (!de_and_cai.empty()) {
        Stu stu = de_and_cai.top();
        de_and_cai.pop();
        cout << stu.id << " " << stu.de << " " << stu.cai << endl;
    }
    while (!de_sheng_cai.empty()) {
        Stu stu = de_sheng_cai.top();
        de_sheng_cai.pop();
        cout << stu.id << " " << stu.de << " " << stu.cai << endl;
    }
    while (!sheng_de_sheng_cai.empty()) {
        Stu stu = sheng_de_sheng_cai.top();
        sheng_de_sheng_cai.pop();
        cout << stu.id << " " << stu.de << " " << stu.cai << endl;
    }
    while (!others.empty()) {
        Stu stu = others.top();
        others.pop();
        cout << stu.id << " " << stu.de << " " << stu.cai << endl;
    }
    return 0;
}

// @pintia code=end