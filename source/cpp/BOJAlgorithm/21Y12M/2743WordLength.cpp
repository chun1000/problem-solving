//3초면 풀 수 있는 브론즈 문제.

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
	string s;

	cin >> s;

	cout << s.length();

	return 0;
}

