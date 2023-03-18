#include <iostream>
#include <ios>
#include <vector>
#include <string>
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
    int N; cin >> N;
    vector<pair<int, int>> v;
    for(int i = 0; i < N; ++i) {
        int x, y; cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    for(const auto& elem : v) {
        cout << elem.first << " " << elem.second << "\n";
    }

    cout << endl;
    return 0;
}