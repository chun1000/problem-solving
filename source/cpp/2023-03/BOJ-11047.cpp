#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N, K;
vector<int> coins;
//입력 변수

void Input() {
    cin >> N >> K;
    for(int i = 0; i < N; ++i) {
        int temp; cin >> temp;
        coins.push_back(temp);
    }
}

void Solve() {
    int ans = 0;
    while(K != 0) {
        for(auto iter = coins.rbegin(); iter != coins.rend(); iter++) {
            if(K - *iter < 0) continue; 
            K -= *iter;
            ans += 1;
            break;
        }
    }
    cout << ans << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}