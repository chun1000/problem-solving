#include <iostream>
#include <ios>
#include <vector>
#include <map>
#include <string>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선


int x, y;
//풀이에 사용하는 변수

void input() {
	cin >> x >> y;
}
//입력

void solve() {
	int temp[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month[13] = { 0 };
	for (int i = 2; i <= 12; i++) {
		month[i] = temp[i - 1] + month[i-1];
	}

	int days = month[x] + y;
	map<int, string> day_of_week = { {0, "SUN"}, {1, "MON"}, {2, "TUE"}, {3, "WED"}, {4, "THU"}, {5, "FRI"}, {6, "SAT"} };

	cout << day_of_week[days % 7];
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

