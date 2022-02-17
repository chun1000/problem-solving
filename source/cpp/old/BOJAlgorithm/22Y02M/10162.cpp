//브론즈 그리디

#include <iostream>
#include <ios>
#include <vector>
#include <array>

using namespace std;

#define A_SEC 300
#define B_SEC 60
#define C_SEC 10

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();

	int T;
	cin >> T;

	array<int, 3> ans = {0, };

	while (T > 0) {
		if (T >= A_SEC) {
			T -= A_SEC;
			ans[0] += 1;
		}
		else if (T >= B_SEC) {
			T -= B_SEC;
			ans[1] += 1;
		}
		else if (T >= C_SEC) {
			T -= C_SEC;
			ans[2] += 1;
		}
		else {
			cout << "-1";
			return 0;
		}
	}

	for(auto item : ans) cout << item << " ";

	return 0;
}

