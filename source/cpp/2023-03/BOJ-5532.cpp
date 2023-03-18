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


int main() {
    UseFastIO();
    int L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;

    cout << L - max((A-1)/C+1, (B-1)/D+1) << endl;
    return 0;
}