#include <iostream>
#include <ios>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int n;
array<vector<int>, 2> board;
//입력 변수

void Input() {
    cin >> n;
    board[0] = vector<int>(n+1);
    board[1] = vector<int>(n+1);
    for(int i = 1; i <= n; ++i) {
        int temp; cin >> temp;
        board[0][i] = temp;
    }   
    for(int i = 1; i <= n; ++i) {
        int temp; cin >> temp;
        board[1][i] = temp;
    }
}

void Solve() {
    array<vector<int>, 2> dp;
    for(int i = 0; i < 2; ++i) {
        dp[i] = vector<int>(n+1);
        dp[i][1] = board[i][1];
    }

    if(n >= 2) {
        dp[0][2] = board[0][2] + dp[1][1];
        
        dp[1][2] = board[1][2] + dp[0][1];
    }

    for(int i = 3; i <= n; ++i) {
        dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + board[0][i];
        dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + board[1][i];
    }

    cout << max(*max_element(dp[0].begin(), dp[0].end()), *max_element(dp[1].begin(), dp[1].end())) << "\n";
}

int main() {
    UseFastIO();
    int T; cin >> T;
    for(int i = 0; i < T; ++i) {
        Input();
        Solve();
    }
    cout << endl;
    return 0;
}