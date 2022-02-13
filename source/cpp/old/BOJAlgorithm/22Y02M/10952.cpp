//브론즈

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

int main()
{
	use_boj_io();
	int A, B;

	while (true) {
		cin >> A >> B;
		if (A == B && A == 0) {
			break;
		}
		cout << A + B << "\n";
	}


	return 0;
}

