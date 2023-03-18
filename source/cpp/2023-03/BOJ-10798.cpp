#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    UseFastIO();
    vector<string> board(5);
    size_t max_len = 0;
    for(int i = 0; i < 5; ++i) {
        string temp; cin >> temp;
        max_len = max(temp.length(), max_len);
        board[i] = temp;
    }

    for(int i = 0; i <= max_len; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(board[j].length() > i) cout << board[j][i];
        }
    }

    cout << endl;
    return 0;
}