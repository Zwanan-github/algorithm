/*
  @pintia psid=994805260223102976 pid=994805304020025344 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1018 锤子剪刀布
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805304020025344
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

int n;
//B  C  J  
int A[3], B[3], sum_a = 0, sum_b = 0;
map<int, char> m = { {0, 'B'}, {1, 'C'}, {2, 'J'} };

int main(int argc, char const* argv[])
{
	cin >> n;
	for (int i = 0; i < n; ++i) {
		char L, R;
		cin >> L >> R;
		if (L == 'C') {
			if (R == 'J') A[1]++, sum_a++;
			else if (R == 'B') B[0] ++, sum_b++;
		}
		else if (L == 'J') {
			if (R == 'B') A[2]++, sum_a++;
			else if (R == 'C') B[1]++, sum_b++;
		}
		else if (L == 'B') {
			if (R == 'C') A[0]++, sum_a++;
			else if (R == 'J') B[2]++, sum_b++;
		}
	}
	int comm = n - sum_a - sum_b;
	cout << sum_a << " " << comm << " " << sum_b << endl;
	cout << sum_b << " " << comm << " " << sum_a << endl;
	cout << m[max_element(A, A + 3) - A] << " " << m[max_element(B, B + 3) - B];
	return 0;
}



// @pintia code=end