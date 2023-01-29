#include <iostream>
#include <ios>
#include <vector>
#include <cmath>

using namespace std;

using ll = long long;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

ll GCD(ll a, ll b) {
    ll n;
    while(b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main() {
	use_boj_io();

    ll a, b;

    cin >> a >> b;

    ll gcd = GCD(a, b);

    cout << a*b/gcd << endl;

	return 0;
}

