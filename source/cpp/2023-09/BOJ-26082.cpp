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

int main() {
    UseFastIO();
    int A, B, C;
    cin >> A >> B >> C;
    cout << (B/A)*3*C << endl;
    
    return 0;
}  