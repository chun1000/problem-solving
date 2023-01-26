//2023년 1월 26일, Silver4 math.
//유클리드 호제법을 사용하는 문제. 유클리드 호제법에 대해 기억하기.

#include <iostream>
#include <ios>
#include <vector>

using namespace std;

int N;
vector<int> v;
//문제에 사용하는 변수

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

void Input() {
    int tmp;
    cin >> N;

    v.reserve(N);
    for(int i = 0; i < N; ++i) {
        cin >> tmp;
        v.push_back(tmp);
    }
}
//입력 변수 처리

int Gcd(int a, int b) {
    int n;
    if(a<b) {
        swap(a, b);
    }

    while(b!=0) {
        n = a%b;
        a = b;
        b = n;
    }
    return a;
}

void Solve() {
    int first = v[0];
    for(int i = 1; i < N; ++i) {
        int gcd = Gcd(first, v[i]);
        cout << first/gcd << '/' << v[i]/gcd << '\n';
    }
    cout << endl;
}
//실제 풀이

int main() {
	use_boj_io();
	Input();
	Solve();

	return 0;
}

