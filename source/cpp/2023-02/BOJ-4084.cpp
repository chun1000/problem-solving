#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <bitset>
#include <algorithm>
#include <cmath>

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
    while(true) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        int cnt = 0;
        while(!(a == b && b == c && c == d)) {
            int new_a = abs(a-b);
            int new_b = abs(b-c);
            int new_c = abs(c-d);
            int new_d = abs(d-a);
            a = new_a; b = new_b;
            c = new_c; d = new_d;
            cnt += 1;
        }
        cout << cnt << '\n';;
    }
    cout << endl;
    return 0;
}