//브론즈, 30초컷이 가능한 구현문제.
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

	int N, temp;
	cin >> N;
	int cute[2] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> temp;
		cute[temp] += 1;
	}

	if (cute[0] > cute[1]) {
		cout << "Junhee is not cute!";
	}
	else {
		cout << "Junhee is cute!";
	}

	return 0;
}

