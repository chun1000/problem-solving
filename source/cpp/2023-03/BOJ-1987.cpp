#include <iostream>
#include <ios>
#include <vector>
#include <bitset>
#include <array>
#include <algorithm>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int R, C;
vector<vector<char>> board;
//입력 변수

void Input() {
    cin >> R >> C;
    board = vector<vector<char>>(R, vector<char>(C));
    for(int i = 0; i < R; ++i) {
        for(int j = 0; j < C; ++j) {
            char c; cin >> c;
            board[i][j] = c;
        }
    }
}

bitset<26> visit;
array<pair<int, int>, 4> diffs = {{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}};
int max_val = 0;
void dfs(int step, int x, int y) {
    max_val = max(step, max_val);

    for(const auto& diff : diffs) {
        int new_x = x + diff.first;
        int new_y = y + diff.second;

        if(new_x < 0 || new_y < 0 || new_x >= R || new_y >= C) continue;
        if(visit[board[new_x][new_y] - 'A']) continue;
        visit[board[new_x][new_y] - 'A'] = true;
        dfs(step + 1, new_x, new_y);
        visit[board[new_x][new_y] - 'A'] = false;
    }
}


void Solve() {
    visit[board[0][0] - 'A'] = true;
    dfs(1, 0, 0);
    cout << max_val << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}