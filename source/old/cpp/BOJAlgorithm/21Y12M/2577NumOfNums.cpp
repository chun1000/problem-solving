//문법 익히기 좋은 브론즈 문제. 크게 개선사항 없음.
//C++에서의 문자열 변환 : to_string & stoi
#include <iostream>
#include <ios>
#include <string>
#include <vector>

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
	int A, B, C, result;
	int ans[10] = { 0, };

	cin >> A >> B >> C;

	result = A * B*C;

	string s = to_string(result);

	for (char item : s) {
		ans[item - '0'] += 1;
	}

	for (int item : ans) {
		cout << item << "\n";
	}


	return 0;
}

