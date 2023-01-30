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

/*
ll GCD(ll a, ll b) {
    while(b != 0) {
        ll n = a % b;
        a = b; b = n;
    }
    return a;
} GCD 반복문 구현: 시간 800ms*/

/*
ll GCD(ll a, ll b) {
    if(b == 0) return a;
    else return GCD(b, a%b);
} 
GCD 재귀 구현: 시간 804ms*/


ll GCD(ll a, ll b) { return (b==0 ? a : GCD(b, a%b));}
//삼항 연산 숏코딩. 시간 804ms

int main() {
	use_boj_io();
    ll a, b; 
    //2^32승을 넘는 범위라서 long long으로 선언해야한다.
    cin >> a >> b;

    ll denominator = b - a;
    ll numerator = 0;
    for(ll i = 1; i*i <= b; ++i) {
        if(i*i > a) numerator += 1;
    }
    //범위 안에 제곱수가 몇개 들었는지 구함.
    //주의: sqrt를 써서 구할 시, double 자료형은 유효숫자가 16개밖에 안되기 때문에 답이 틀림.

    ll gcd = GCD(denominator, numerator);
    if(numerator == 0) cout << "0" << endl;
    else cout << numerator/gcd << '/' << denominator/gcd << endl;

	return 0;
}
