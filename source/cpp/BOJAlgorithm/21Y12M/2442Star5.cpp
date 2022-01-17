//브론즈
#include <iostream>
#include <ios>
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
		for (int j = i; j <= N-1; j++) {
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}


	return 0;
}

