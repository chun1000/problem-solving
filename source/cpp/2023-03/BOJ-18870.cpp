#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <climits>
#include <tuple>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N;
vector<pair<int, int>> v; //val, idx;
//입력 변수

void Input() {
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int temp; cin >> temp;
        v.push_back({temp, i});
    }
}

void Solve() {
    vector<pair<int, int>> compressed; //val, idx
    sort(v.begin(), v.end());
    int prev_val = INT_MAX;
    int compressed_val = -1;
    for(const auto& elem : v) {
        int val, idx; tie(val, idx) = elem;
        if(prev_val != val) compressed_val += 1;
        compressed.push_back({compressed_val, idx});
        prev_val = val;
    }

    sort(compressed.begin(), compressed.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second;
    });

    for(const auto& elem : compressed) {
        cout << elem.first << " ";
    }
    cout << endl;
}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}
