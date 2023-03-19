#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    UseFastIO();
    int N; cin >> N;
    vector<double> dp(N+1);
    for(int i = 1; i <= N; ++i) {
        double temp; cin >> temp;
        dp[i] = temp;
    }

    for(int i = 2; i <= N; ++i) {
        dp[i] = max(dp[i], dp[i-1]*dp[i]);
    }
    double temp = *max_element(dp.begin(), dp.end());
    temp *= 1000; temp = round(temp);
    temp /= 1000;
    cout.precision(3);
    cout << fixed;
    cout << temp << endl;
    return 0;
}  