#include <iostream>
#include <ios>
#include <vector>
#include <bitset>
using namespace std;
using ll = long long;

void use_boj_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    use_boj_io();

    vector<vector<bool>> board(101, vector<bool>(100));
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        int x, y; cin >> x >> y;
        for(int i = x; i < x+10; ++i) {
            for(int j = y; j < y+10; ++j) {
                board[i][j] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 100; ++i) {
        for(int j = 0; j < 100; ++j) {
            if(board[i][j]) ans += 1;
        }
    }

    cout << ans << endl;

    return 0;
}