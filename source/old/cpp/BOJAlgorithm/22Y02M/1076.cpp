//브론즈, 캐스팅을 할 때는 long long my_val <- 컴파일 에러가 날 수도 있음 (long long) my_val <- 권장
#include <iostream>
#include <ios>
#include <map>
#include <cmath>

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

	map<string, int> table = {
		{"black", 0}, {"brown", 1},
		{"red", 2}, {"orange", 3},
		{"yellow", 4}, {"green", 5},
		{"blue", 6}, {"violet", 7},
		{"grey", 8}, {"white", 9},
	};

	string inputs[3];
	cin >> inputs[0] >> inputs[1] >> inputs[2];

	long long ans = (table[inputs[0]] * 10 + table[inputs[1]]) * (long long)(pow(10, table[inputs[2]]));
	cout << ans;


	return 0;
}

