#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <algorithm>
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
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), [](char c) {return tolower(c);});
        cout << s << "\n";
    }
    cout << endl;
    return 0;
}