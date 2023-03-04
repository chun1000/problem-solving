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

    int n; cin >> n;
    for(int i = 1; i <= n; ++i) {
        cout << i << " "; 
        if(i % 6 == 0) cout << "Go! ";
    }

    if(n % 6 != 0) cout << "Go!";

    cout<<endl;
    return 0;
}