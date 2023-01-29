#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();
    constexpr int MAX = 10000;

    int N; cin >> N;
    vector<int> dp(N+1, MAX);
    dp[1] = 0;
    for(int i = 1; i <= N; ++i) {
        int num; cin >> num;
        for(int j = 1; j <= num; ++j) {
            if(i+j > N) break;
            dp[i+j] = min(dp[i] + 1, dp[i+j]);
        }
    }

    if(dp[N] == MAX) cout << "-1" << endl;
    else cout << dp[N] << endl;

	return 0;
}

