//브론즈 문제, stl 스택 사용 예제

#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();
	stack<int> s;
	int K, temp;

	cin >> K;
	
	for (int i = 0; i < K; i++) {
		cin >> temp;
		if (temp == 0) {
			s.pop();
		}
		else {
			s.push(temp);
		}
	}

	temp = 0;
	while (!s.empty()) {
		temp += s.top();
		s.pop();
	}

	cout << temp;

	return 0;
}

