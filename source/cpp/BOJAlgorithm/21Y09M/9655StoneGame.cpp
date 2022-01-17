#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

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

	int n;
	int dp[1001] = { 0, };
	cin >> n;


	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 0;
	dp[3] = 1;

	for (int i = 4; i <= n; i++) {
		if (min(dp[i - 1], dp[i - 3]) == 1) {
			dp[i] = 0;
		}
		else {
			dp[i] = 1;
		}
	}

	if (dp[n] == 1) {
		cout << "SK\n";
	}
	else {
		cout << "CY\n";
	}
	

	return 0;
}

