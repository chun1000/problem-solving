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
    cout << fixed;
    cout.precision(2);
    while(true) {
        float a; cin >> a;
        if((int)a == -1) break; 
        cout << "Objects weighing " << a <<  " on Earth will weigh " << a*0.167 <<" on the moon.\n";
    }
    cout << endl;
    return 0;
}