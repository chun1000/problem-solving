#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int GCD(int a, int b) {
    int n;
    if(a < b) swap(a, b);
    
    while(b!=0) {
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}

int main() {
	use_boj_io();

    int a1, b1, a2, b2, b, gcd, a;

    cin >> a1 >> b1;
    cin >> a2 >> b2;

    a1 = a1*b2;
    a2 = a2*b1;
    b = b1*b2;
    a = a1 + a2;

    gcd = GCD(a, b);
    cout << a/gcd << ' ' << b/gcd << endl;
	return 0;
}

