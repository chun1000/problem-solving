#include <iostream>
#include <ios>
#include <vector>
#include <memory>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선


class Point {
public:
	int x_, y_;
	Point(int x, int y) : x_(x), y_(y) {}
	int quadrant() {
		if (x_ > 0) {
			if (y_ > 0) {
				return 1;
			}
			else {
				return 4;
			}
		}
		else {
			if (y_ > 0) {
				return 2;
			}
			else {
				return 3;
			}
		}
	}
};

unique_ptr<Point> p;
//풀이에 사용하는 변수

void input() {
	int a, b;
	cin >> a >> b;
	p = make_unique<Point>(a, b);
}
//입력

void solve() {
	cout << p->quadrant();
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

