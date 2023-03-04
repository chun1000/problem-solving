#include <iostream>
#include <ios>
#include <vector>
#include <array>
#include <cmath>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N, M;
array<bool, 10> break_btn;

void Input() {
    cin >> N >> M;
    for(int i = 0; i < M; ++i) {
        int tmp; cin >> tmp;
        break_btn[tmp] = true;
    }
}

int GetClickNum(int a) {
    int cnt = 0;
    if(a == 0) return 1;
    while(a != 0) {
        a /= 10;
        cnt += 1;
    }
    return cnt;
}

bool IsMoveable(const array<bool, 10> break_btn, int a) {
    if(a==0) return !break_btn[0];
    while(a!=0) {
        if(break_btn[a%10]) return false;
        a /= 10;
    }
    return true;
}

void Solve() {
    constexpr int MAX = 1000000;
    int ans = abs(100-N);
    for(int i = 0; i <= MAX; ++i) {
        if(!IsMoveable(break_btn, i)) continue;
        ans = min(ans, GetClickNum(i) + abs(i-N));
    }
    cout << ans << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}