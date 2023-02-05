#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    use_boj_io();

    int n; cin >> n;
    int a1, a2, a3;
    a1 = 1;
    a2 =2;
    for(int i = 3; i <=n; ++i) {
        a3 = (a1+a2) % 10007;
        a1 = a2;
        a2 = a3;
    }
    if(n==1) cout << a1 << endl;
    else if(n==2) cout << a2 << endl;
    else cout << a3 << endl;

    return 0;
}
