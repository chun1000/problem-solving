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
    cin.ignore();
    for(int i = 1; i <= N; ++i) {
        string s; getline(cin, s);
        cout << i << ". " << s << "\n";
    }
    cout << endl;
    return 0;
}