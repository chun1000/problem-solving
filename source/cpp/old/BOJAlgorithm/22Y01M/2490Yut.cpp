//노가다성 브론즈
#include <iostream>

using namespace std;

int main()
{
	int zero = 0, temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> temp;
			if (temp == 0) {
				zero += 1;
			}
		}
		switch (zero) {
		case 0:
			cout << "E\n";
			break;
		case 1:
			cout << "A\n";
			break;
		case 2:
			cout << "B\n";
			break;
		case 3:
			cout << "C\n";
			break;
		case 4:
			cout << "D\n";
			break;
		}
		zero = 0;
	}
	return 0;
}