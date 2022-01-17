//좀 더 깔끔한 접근법이 있을 듯.

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
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {

		for (int j = 1; j < i; j++) {
			cout << " ";
		}

		for (int j = 1; j <= 2*(N - i + 1) - 1; j++) {
			cout << "*";
		}

		cout << "\n";
	}

	return 0;
}

