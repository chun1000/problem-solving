#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
#include <array>
#include <tuple>
#include <climits>

using namespace std;
constexpr int INF = INT_MAX;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N;
vector<vector<int>> board;
//입력 변수

void Input() {
    cin >> N;
    board = vector<vector<int>>(N, vector<int>(N));
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            int tmp; cin >> tmp;
            board[i][j] = tmp;
        }
    }
}

pair<int, int> GetSharkPos() {
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            if(board[i][j] == 9) return {i, j};
        }
    }
}

vector<vector<int>> GetDistanceBoard(int shark_size) {
    array<pair<int, int>, 4> diffs = {{{1, 0}, {-1, 0}, {0, 1}, {0, -1}}};
    vector<vector<bool>> visit(N, vector<bool>(N));
    vector<vector<int>> dist_board(N, vector<int>(N, INF));
    auto shark_pos = GetSharkPos();
    queue<tuple<int ,int, int>> q; //x, y, dist
    q.push({shark_pos.first, shark_pos.second, 0});
    visit[shark_pos.first][shark_pos.second] = true;

    while(!q.empty()) {
        int x, y, dist; tie(x, y, dist) = q.front();
        q.pop();

        if(board[x][y] != 0 && board[x][y] != 9 && board[x][y] < shark_size) {
            dist_board[x][y] = dist;
        }

        for(const auto& diff : diffs) {
            int new_x = x + diff.first;
            int new_y = y + diff.second;

            if(new_x < 0 || new_x >= N || new_y < 0 || new_y >= N) continue;
            if(board[new_x][new_y] > shark_size) continue;
            if(visit[new_x][new_y]) continue;
            visit[new_x][new_y] = true;

            q.push({new_x, new_y, dist+1});
        }

    }

    return dist_board;
}
 
void Solve() {
    int shark_size = 2;
    int shark_hunger = 0;
    int t = 0;
    pair<int, int> prev_pos;
    pair<int, int> target_pos =  GetSharkPos();
    while(true) {
        int target_dist = INT_MAX;
    
        prev_pos = target_pos;
        auto dist_board = GetDistanceBoard(shark_size);
/*
        cout << endl;
        for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
*/
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                if(dist_board[i][j] < target_dist) {
                    target_pos = {i, j};
                    target_dist = dist_board[i][j];
                }
            }
        }

        if(prev_pos == target_pos) break;

        board[prev_pos.first][prev_pos.second] = 0;
        board[target_pos.first][target_pos.second] = 9;
        shark_hunger++;

        if(shark_hunger == shark_size) {
            shark_size++;
            shark_hunger = 0;
        }
        
        t += target_dist;
    }

    cout << t << endl;



    
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}