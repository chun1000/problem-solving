#include <iostream>
#include <ios>
#include <vector>
#include <string>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


int main() {
    UseFastIO();
    vector<int> dp(1000001);
    int N; cin >> N;
    
    dp[1] = 1;
    dp[2] = 2;

    for(int i = 3; i <= N; ++i) {
        dp[i] = (dp[i-1] + dp[i-2]) % 15746;
    }

    cout << dp[N] << endl;
    return 0;
}