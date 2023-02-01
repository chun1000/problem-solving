#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;
using ll = long long;


void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();

    int N; cin >> N;
    vector<ll> A; A.reserve(N);
    set<ll> s;

    for(int i = 0; i < N; ++i) {
        ll tmp; cin >> tmp;
        A.push_back(tmp);
    }

    ll max_val = *max_element(A.begin(), A.end());
    vector<bool> sieve(max_val+1);
    sieve[1] = true;
    for(ll i = 2; i <= sqrt(max_val); ++i) {
        if(sieve[i]) continue;
        for(ll j = i*i; j <= max_val; j += i) {
            sieve[j] = true;
        }
    }

    ll ans = 1;
    for(const auto& item : A) {
        if(!sieve[item]) s.insert(item);
    }

    for(const auto& item : s) {
          ans *= item;  
    }

    if(ans == 1) cout << "-1" << endl;
    else {
        cout << ans << endl;
    }
    

	return 0;
}

