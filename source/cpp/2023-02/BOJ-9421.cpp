#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

bool HasD(int num, int d) {
    while(num != 0) {
        if(num%10== d) return true;
        num /= 10;
    }
    return false;
}

int main()
{
    int A, B, D; cin >> A >> B >> D;
    vector<bool> sieve(B+1);
    sieve[1] = true;
    for(int i = 2; i <= sqrt(B); ++i) {
        if(sieve[i]) continue;
        for(int j = i*i; j <= B; j += i) {
            sieve[j] = true;
        }
    }
    int ans = 0;
    for(int i = A; i <= B; ++i) {
        if(!sieve[i] && HasD(i, D)) {
            ans += 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}
