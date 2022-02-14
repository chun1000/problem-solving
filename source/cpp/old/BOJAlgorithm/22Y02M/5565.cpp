//브론즈, 그냥 덧셈 문제.
#include <iostream>
#include <ios>
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
	int total, book;

	cin >> total;

	for (int i = 0; i < 9; i++) {
		cin >> book;
		total -= book;
	}

	cout << total;
	return 0;
}

