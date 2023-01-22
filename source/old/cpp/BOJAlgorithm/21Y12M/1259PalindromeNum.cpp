//브론즈 문제, reverse 함수 및 string 관련 함수 익숙해지기.

#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>

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

	string s, front, back;

	while (true) {
		cin >> s;

		if (s == "0") break;

		front = s.substr(0, (s.length() + 1) / 2);
		back = s.substr(s.length() / 2);
		reverse(back.begin(), back.end());
		
		if (front == back) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}

	return 0;
}

