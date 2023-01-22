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
//���� ���� ����� �ӵ� ����


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
//Ǯ�̿� ����ϴ� ����

void input() {
	int a, b;
	cin >> a >> b;
	p = make_unique<Point>(a, b);
}
//�Է�

void solve() {
	cout << p->quadrant();
}
//Ǯ��

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

