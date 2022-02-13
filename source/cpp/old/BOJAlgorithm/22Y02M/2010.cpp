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
	int ans = -(N - 1);

	for (int i = 0; i < N; i++) {
		cin >> temp;
		ans += temp;
	}

	cout << ans;
}

