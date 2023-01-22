#include <iostream>
#include <string>
#include <ios>
#include <stack>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

struct Data {
	string s;
};
//풀이에 사용하는 변수

Data input() {
    Data d;
	cin >> d.s;
	return d;
}
//입력

void solve(const Data& d) {
	int my_stack = 0;
	int ans = 0;

    for(int i = 0; i < d.s.length()-1; ++i) {
		//레이저 쏘는 곳
		if(d.s[i] == '(' && d.s[i+1] == ')') {
			ans += my_stack;
			i += 1;
			continue;
		}

		if(d.s[i] == '(') {
			my_stack += 1;
			ans += 1;
		}
		else if(d.s[i] == ')') {
			my_stack -= 1;
		}
	}

	std::cout << ans << std::endl;
}
//풀이

int main() {
	use_boj_io();
	Data d = input();
	solve(d);

	return 0;
}

