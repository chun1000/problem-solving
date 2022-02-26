//평범한 실버 DP문제
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


int N;
//풀이에 사용하는 변수

void input() {
	cin >> N;
}
//입력

void solve() {
	vector<int> dp(N+1, 1000000);
	dp[N] = 0;
	for (int i = N; i > 1; i--) {
		if (i % 3 == 0) {
			dp[i / 3] = min(dp[i / 3], dp[i] + 1);
		} 
		if (i % 2 == 0) {
			dp[i / 2] = min(dp[i / 2], dp[i] + 1);
		}
		dp[i - 1] = min(dp[i - 1], dp[i] + 1);
	}

	cout << dp[1];
}
//풀이

int main() {
	use_boj_io();
	input();
	solve();

	return 0;
}

