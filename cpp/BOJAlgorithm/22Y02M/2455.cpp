#include <iostream>
#include <ios>
#include <vector>
#include <array>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선


array<pair<int, int>, 4> stations;
//풀이에 사용하는 변수

void input() {
	int get_on, get_off;
	for (int i = 0; i < 4; i++) {
		cin >> get_off >> get_on;
		stations[i] = { get_off, get_on };
	}
}
//입력

void solve() {
	int ans = -10, get_on, get_off, current = 0;
	for (auto item : stations) {
		get_off = item.first; get_on = item.second;
		current = current + get_on - get_off;
		ans = max(ans, current);
	}
	cout << ans;
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

