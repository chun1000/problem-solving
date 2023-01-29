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

int main() {
	use_boj_io();
    int dp[11] = {0, 1, 2, 4};
    int T, n;

    for(int i = 4; i < 11; ++i) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    cin >> T;
    for(int i = 0; i < T; ++i) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    cout << endl;
	return 0;
}

