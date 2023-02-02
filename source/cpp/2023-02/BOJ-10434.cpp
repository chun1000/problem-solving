#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

vector<bool> GetEratosthenesSieve() {
    vector<bool> sieve(10001);
    sieve[1] = true;
    for(int i = 2; i <= sqrt(10000); ++i) {
        if(sieve[i]) continue;
        for(int j = i*i; j <= 10000; j += i) sieve[j] = true;
    }
    return sieve;
}

int SumOfSquare(int a) {
    int sum = 0;
    while(a != 0) {
        int val = a % 10;
        sum += val*val;
        a /= 10;
    }
    return sum;
}

bool IsHappy(int a) {
    bool visited[500] = {false, };
    while(a != 1) {
        a = SumOfSquare(a);
        if(visited[a]) return false;
        visited[a] = true;
    }
    return true;
}

int main()
{
    int P; cin >> P;
    auto sieve = GetEratosthenesSieve();
    for(int i = 0; i < P; ++i) {
        int a, b;
        cin >> a >> b; cout << a << ' ' << b << ' ';
        if(sieve[b]) {
             cout << "NO\n";
        }
        else {
            if(IsHappy(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    cout << endl;
    return 0;
}
