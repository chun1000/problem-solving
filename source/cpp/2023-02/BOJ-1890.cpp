#include <iostream>
#include <ios>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    use_boj_io();

    int n; cin >> n;
    vector<vector<int>> board(n+1, vector<int>(n+1));
    vector<vector<ll>> dp(n+1, vector<ll>(n+1));
    dp[1][1] = 1;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            int tmp; cin >> tmp;
            board[i][j] = tmp;
        }
    }

    for(int j = 1; j <= n; ++j) {
        for(int i = 1; i <= n; ++i) {
            ll val = board[i][j];
            if(val == 0) break;
            if(i+val <= n) dp[i+val][j] += dp[i][j];
            if(j+val <= n) dp[i][j+val] += dp[i][j];
        }
    }

    cout << dp[n][n] << endl;

    return 0;
}
