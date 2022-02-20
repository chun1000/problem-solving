#include <iostream>
#include <ios>
#include <vector>
#include <string>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선


string word;
//풀이에 사용하는 변수

void input() {
	cin >> word;
}
//입력

void solve() {
	int length = 0;
	for (char item : word) {
		cout << item;
		length += 1;
		if (length == 10) {
			cout << "\n";
			length = 0;
		}
	}
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

