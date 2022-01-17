//브론즈 DP 문제

#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>
#define INF 9999999
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

	vector<int> dp(N+1, 0);
	dp[0] = 0;
	dp[1] = INF;
	dp[2] = INF;
	
	for (int i = 3; i <= 4; i++) {
		dp[i] = dp[i - 3] + 1;
	}

	for (int i = 5; i <= N; i++) {
		dp[i] = min(dp[i - 5], dp[i - 3]) + 1;
	}

	if (dp[N] < 5000) {
		cout << dp[N];
	}
	else {
		cout << "-1";
	}


	return 0;
}

