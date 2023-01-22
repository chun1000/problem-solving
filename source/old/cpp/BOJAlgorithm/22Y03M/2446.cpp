//별찍기
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


int N;
//풀이에 사용하는 변수

void input() {
	cin >> N;
}
//입력

void solve() {
	for (int i = 0; i < N; i++) cout << string(i, ' ') << string(2 * (N - i) - 1, '*') << "\n";
	for (int i = N-2; i >= 0; i--) cout << string(i, ' ') << string(2 * (N - i) - 1, '*') << "\n";
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

