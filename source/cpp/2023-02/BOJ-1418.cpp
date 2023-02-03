#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{
    constexpr int MAX = 100001; 
    vector<int> sieve(MAX);
    for(int i = 2; i <= MAX; ++i) {
        if(sieve[i] != 0) continue;
        for(int j = i; j <= MAX; j += i) sieve[j] = i;
    }
    //주의: 최댓값을 구해야 하기 떄문에 일반 에라토스테네스의 채랑 for문 조건이 미묘하게 다름.

    int N, K; cin >> N >> K;
    int ans = 0;
    for(int i = 1; i <= N; ++i) if(sieve[i] <= K) ans += 1;
    cout << ans << endl;

    return 0;
}