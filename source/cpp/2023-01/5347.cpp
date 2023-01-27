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
    if(a<b) swap(a, b);
    while(b!=0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main() {
	use_boj_io();
    int n;
    long long a, b;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        long long gcd;
        cin >> a >> b;

        gcd = GCD(a, b);
        cout << a*b/gcd << '\n';
    }
    
    cout << endl;
	return 0;
}

