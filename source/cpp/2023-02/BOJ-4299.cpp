#include <iostream>
#include <ios>
#include <vector>
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
    int a, b; cin >> a >> b;
    int x = (a+b)/2;
    int y= (a-b)/2;

    if((a+b)%2!=0) cout << "-1" << endl;
    else if(a<b) cout << "-1" << endl;
    else cout << x << " " << y << endl;
    return 0;
}