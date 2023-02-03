#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>

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
    constexpr int MAX = 80;
    
    vector<ll> fibo(MAX+2);
    fibo[1] = 1; fibo[2] = 1;
    for(int i = 3; i < MAX+2; ++i) fibo[i] = fibo[i-1] + fibo[i-2];

    int N; cin >> N;
    cout << 2*(fibo[N+1]+fibo[N]) << endl;

    return 0;
}
