#include <iostream>
#include <string>
#include <ios>
#include <vector>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선


string str;
//풀이에 사용하는 변수

void input() {
	while (true) {
		getline(cin, str);
		if (str == "") break;
		cout << str << "\n";
	}
}
//입력

void solve() {

}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

