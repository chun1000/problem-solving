#include <iostream>
#include <ios>
#include <vector>
#include <string>
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
        string new_s = "";
        char prev_c = '\n';
        for(const auto& c : s) {
            if(prev_c != c) {
                new_s += c;
                prev_c = c;
            }
        }
        cout << new_s << "\n";
    }
    cout << endl;
    return 0;
}