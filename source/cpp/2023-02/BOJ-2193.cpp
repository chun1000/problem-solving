#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <map>

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
    vector<ll> dp(N+1);
    dp[0] = 0; dp[1] = 1; dp[2] = 1;
    for(int i = 3; i <= N; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[N] << endl;
    return 0;
}
