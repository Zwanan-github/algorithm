/*
	@pintia psid=994805260223102976 pid=994805301562163200 compiler=GXX
	ProblemSet: PAT (Basic Level) Practice （中文）
	Title: 1020 月饼
	https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805301562163200
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

struct Goods {
	double price, cnt;
	int operator<(const Goods& a) const {
		return (price / cnt) > (a.price / a.cnt);
	}
};

int main(int argc, char const* argv[])
{
	int N;
	double D;
	cin >> N >> D;
	double ans = 0.0;
	vector<Goods> goods(N);
	for (int i = 0; i < N; ++i) {
		cin >> goods[i].cnt;
	}
	for (int i = 0; i < N; ++i) {
		cin >> goods[i].price;
	}
	sort(goods.begin(), goods.end());
	for (int i = 0; i < N; ++i) {
		if (goods[i].cnt <= D) {
			ans += goods[i].price;
			D -= goods[i].cnt;
		}
		else {
			ans += goods[i].price / goods[i].cnt * D;
			break;
		}
	}
	printf("%.2f\n", ans);
	return 0;
}

// @pintia code=end