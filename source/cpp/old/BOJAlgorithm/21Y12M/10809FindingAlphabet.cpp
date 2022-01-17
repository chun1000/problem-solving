//브론즈 문제, fill 함수의 응용.

#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <array>
using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();
	array<int, 26> ans;
	fill(ans.begin(), ans.end(), -1);
	string s;
	int idx;

	cin >> s;

	for (int i = 0; i < (int)s.length(); i++) {
		idx = s[i] - 'a';
		if (ans[idx] == -1) {
			ans[idx] = i;
		}
	}

	for (int item : ans) {
		cout << item << " ";
	}

	return 0;
}

