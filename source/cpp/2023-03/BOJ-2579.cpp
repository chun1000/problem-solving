#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    UseFastIO();
    int n; cin >> n;
    vector<int> stairs(n+1);
    vector<int> dp(n+1);

    for(int i = 1; i <= n; ++i) {
        int temp; cin >> temp;
        stairs[i] = temp;
    }

    dp[1] = stairs[1];
    if(n >= 2) dp[2] = stairs[1] + stairs[2];

    for(int i = 3; i <= n; ++i) {
        dp[i] = max((stairs[i] + dp[i-2]), (stairs[i] + stairs[i-1] + dp[i-3]));
    }

    cout << dp[n] << endl;
    return 0;
}