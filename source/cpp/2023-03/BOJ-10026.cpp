#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <queue>
#include <tuple>
using namespace std;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int bfs(const vector<vector<char>>& board, int N) {
    vector<vector<bool>> visit(N, vector<bool>(N));
    vector<pair<int, int>> diffs {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    queue<tuple<int, int, char>> q;

    int ans = 0;

    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(visit[i][j]) continue;
            q.push({i, j, board[i][j]});
            ans += 1;
            while(!q.empty()) {
                int x, y; char c;
                tie(x, y, c) = q.front();
                q.pop();

                for(const auto& diff : diffs) {
                    int new_x = x + diff.first;
                    int new_y = y + diff.second;

                    if(new_x < 0 || new_x >= N || new_y < 0 || new_y >= N) continue;
                    if(visit[new_x][new_y]) continue;
                    if(board[new_x][new_y] != c) continue;

                    visit[new_x][new_y] = true;
                    q.push({new_x, new_y, c}); 
                }

            }
        }
    }
    return ans;
}

int main()
{
    use_boj_io();

    int N; cin >> N;
    vector<vector<char>> board(N, vector<char>(N));
    
    for(int i = 0; i < N; ++i) {
        string s; cin >> s;
        board[i] = vector<char>(s.begin(), s.end());
    }

    vector<vector<char>> board_cb(N, vector<char>(N));

    for(int i = 0; i <  N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(board[i][j] == 'G') board_cb[i][j] = 'R';
            else board_cb[i][j] = board[i][j];
        }
    }

    cout << bfs(board, N) << " " << bfs(board_cb, N) << endl;
    return 0;
}
