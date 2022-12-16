//브론즈

#include <iostream>

using namespace std;

int main() {
	int A, B, C, D;

	cin >> A >> B >> C >> D;

	if (B + C > A + D) {
		cout << A + D;
	}
	else {
		cout << B + C;
	}

	return 0;
}