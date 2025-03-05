/*
  @pintia psid=994805260223102976 pid=994805299301433344 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1022 D进制的A+B
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805299301433344
*/
// @pintia code=start
#include<iostream>

using namespace std;


int main(int argc, char const* argv[])
{
	long long A, B, D;
	cin >> A >> B >> D;
	long long res = A + B;
	string ans = "";
	while (res) {
		ans = to_string(res % D) + ans;
		res /= D;
	}
	cout << (ans.compare("") == 0 ? "0" : ans) << endl;
	return 0;
}

// @pintia code=end