#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>

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
    int N, M; cin >> N >> M;
    vector<vector<int>> board(N+1, vector<int>(M+1));
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= M; ++j) {
            int candy; cin >> candy;
            board[i][j] = candy;
        }
    }

    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= M; ++j) {
            int left = 0, up = 0, diagonal = 0;
            if(i-1 > 0) left = board[i-1][j];
            if(j-1 > 0) up = board[i][j-1];
            if(i-1 > 0 && j-1 > 0) diagonal = board[i-1][j-1];

            board[i][j] += max(max(left, up), diagonal);
        }
    }

    cout << board[N][M] << endl;
    return 0;
}