#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <array>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


int main() {
    UseFastIO();
    array<int, 1001> board;
    
    int num = 1;
    int accum = 0;
    for(int i = 1; i <= 1000; ++i) {
        board[i] = num;
        accum += 1;
        if(num <= accum) {
            num += 1;
            accum = 0;
        }
    }

    int A, B; cin >> A >> B;

    int ans = 0;
    for(int i = A; i <= B; ++i) {
        ans += board[i];
    }

    cout << ans << endl;
    return 0;
}