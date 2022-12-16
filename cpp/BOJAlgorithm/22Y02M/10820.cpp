//브론즈, getline과 char 검사 사용 예제.

#include <iostream>
#include <ios>
#include <string>

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
	string input;

	while (getline(cin, input)) {
		int lower = 0, upper = 0, space = 0, digit = 0;
		for (char c : input) {
			if (c == ' ') {
				space += 1;
			}
			else if (isdigit(c)) {
				digit += 1;
			}
			else if (islower(c)) {
				lower += 1;
			}
			else {
				upper += 1;
			}
		}

		cout << lower << " " << upper << " " << digit << " " << space << "\n";
	}
	

	return 0;
}

