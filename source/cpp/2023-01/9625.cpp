#include <iostream>
#include <ios>
#include <vector>

using namespace std;


//문제에 사용하는 변수

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();

    int K;
    cin >> K;

    int a =1 , b = 0;

    for(int i = 0; i < K; ++ i) {
        int a_prev, b_prev;
        a_prev = a;
        b_prev = b;

        a = b_prev;
        b = a_prev + b_prev;
    }

    cout << a << ' ' << b << endl;

	return 0;
}

