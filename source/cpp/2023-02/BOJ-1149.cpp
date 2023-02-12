#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <algorithm>

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
    int N; cin >> N;
    vector<vector<int>> dp(N+1, vector<int>(3));

    for(int i = 1; i <= N; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> dp[i][j];
        }
    }


    for(int i = 2; i <= N; ++i) {
        dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] += min(dp[i-1][0], dp[i-1][1]);
    }

    cout << *min_element(dp[N].begin(), dp[N].end()) << endl;

    return 0;
}
