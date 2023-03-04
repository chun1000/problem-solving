#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N;
//입력 변수

void Input() {
    cin >> N;
}

void Solve() {
    vector<int> dp(N+1);
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i <= N; ++i) {
        dp[i] = (dp[i-1] + 2*dp[i-2]) %10007;
    }
    cout << dp[N] << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}