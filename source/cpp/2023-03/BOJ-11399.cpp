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

int N;
vector<int> P;
//입력 변수

void Input() {
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int temp; cin >> temp;
        P.push_back(temp);
    }
}

void Solve() {
    sort(P.begin(), P.end());
    int ans = 0;
    int acc = 0;
    for(const auto& p : P) {
        acc += p;
        ans += acc;
    }
    cout << ans << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}