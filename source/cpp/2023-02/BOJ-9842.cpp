#include <iostream>
#include <ios>
#include <vector>
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
    constexpr int MAX = 1500000;
    vector<bool> sieve(MAX);
    sieve[1] = true;
    int ans = 0;

    int n; cin >> n;

    for(ll i = 2; i < MAX; ++i) {
        if(sieve[i]) continue;
        else {
            ans += 1;
            if(ans == n) {
                cout << i << endl;
                return 0;
            }
        }
        for(ll j = i*i; j < MAX; j += i) sieve[j] = true;
    }



    return 0;
}
