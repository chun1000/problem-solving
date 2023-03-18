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
    while(true) {
        int a, b; cin >> a >> b;
        if(a==0 && b ==0) break;

        if(a > b) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}