#include <iostream>
#include <ios>
#include <vector>
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
    int N, M; cin >> N >> M;
    int short_side = (N > M) ? M : N;
    vector<vector<int>> board(50, vector<int>(50));

    for(int i = 0; i < N; ++i) {
        string str; cin >> str;
        for(int j = 0; j < M; ++j) {
            board[i][j] = str[j] - '0';
        }
    }
    int max_len = 1;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            int key = board[i][j];  
            for(int s = 1; s < short_side; ++s) {
                if(s+i >= N || s+j >= M) break;
                if(board[i][j+s] == key && board[i+s][j] == key && board[i+s][j+s] == key) {
                    max_len = max(max_len, (s+1)*(s+1));
                }
            }
        }
    }

    cout << max_len << endl;
    return 0;
}
