/*
  @pintia psid=994805260223102976 pid=1729419194675666948 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 1125 子串与子列
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=1729419194675666948
*/
// @pintia code=start
#include<bits/stdc++.h>

using namespace std;

string str, pattern;

int main(int argc, char const* argv[])
{
	cin >> str >> pattern;
	int len_str = str.length(), len_pattern = pattern.length();
	int start = -1, min_len = len_str + 1;
	for (int i = 0; i < len_str - len_pattern + 1; ++i) {
		if (str[i] != pattern[0]) continue;
		int k = 0;
		for (int j = i; j < len_str; ++j) {
			if (str[j] == pattern[k]) ++k;
			if (len_pattern == k && j - i + 1 < min_len) {
				min_len = j - i + 1;
				start = i;
			}
			if (len_pattern == k) break;
		}
	}
	cout << (start == -1 ? "" : str.substr(start, min_len)) << endl;
	return 0;
}

// @pintia code=end