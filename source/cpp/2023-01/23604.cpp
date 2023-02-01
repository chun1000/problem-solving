#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;
using ll = long long;


void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

ll GCD(ll a, ll b) {
    while(b!=0) {
        ll n = a % b;
        a = b; b = n;
    }
    return a;
}

int main() {
	use_boj_io();

    int n; cin >> n;
    vector<ll> a, b, c;
    a.reserve(n); b.reserve(n); c.reserve(n);
    for(int i = 0; i < n; ++i) {
        ll tmp; cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < n; ++i) {
        ll tmp; cin >> tmp;
        b.push_back(tmp);
    }
    for(int i = 0; i < n; ++i) {
        c.push_back(a[i]-b[i]);
    }

    if(n == 1) {
        cout << c[0] << endl;
        return 0;
    }
    ll gcd = GCD(c[0], c[1]);

    for(int i = 2; i <n; ++i) {
        gcd = GCD(gcd, c[i]);
    }

    cout << gcd << endl;



	return 0;
}

