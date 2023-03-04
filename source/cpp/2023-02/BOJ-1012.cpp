#include <iostream>
#include <ios>
#include <vector>
#include <array>
#include <queue>
#include <tuple>
#include <bitset>
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


int N, M, K;
vector<vector<int>> board;
void solve() {
    array<pair<int, int>, 4> diffs {{{1, 0}, {0, 1}, {-1, 0}, {0, -1}}};
    vector<vector<bool>> visit(N, vector<bool>(M));
    int ans = 0;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < M; ++j) {
            if(board[i][j] != 1 || visit[i][j]) continue;
            ans += 1;
            queue<pair<int, int>> q;
            q.push({i, j}); visit[i][j] = true;
            while(!q.empty()) {
                int x, y; tie(x, y) = q.front();
                q.pop();
                
                for(const auto & diff : diffs) {
                    int new_x = x + diff.first;
                    int new_y = y + diff.second;
                    if(new_x < 0 || new_x >= N || new_y < 0 || new_y >= M) continue;
                    if(visit[new_x][new_y]) continue;
                    if(board[new_x][new_y] == 0) continue;

                    visit[new_x][new_y] = true;
                    q.push({new_x, new_y});
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    use_boj_io();
    int T; cin >> T;
    for(int i = 0; i < T; ++i) {
        cin >> N >> M >> K;
        board = vector<vector<int>>(N+1, vector<int>(M+1, 0));
        for(int j = 0; j < K; ++j) {
            int X, Y; cin >> X >> Y;
            board[X][Y] = 1;
        }
        solve();
    }
    return 0;
}