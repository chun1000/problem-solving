//손풀기 브론즈 2 

#include <iostream>
#include <ios>
#include <string>
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
	int N;
	int ans = 0;
	int succession = 1;

	string s;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s;
		for (char item : s) {
			if (item == 'O') {
				ans += succession;
				succession += 1;
			}
			else {
				succession = 1;
			}
		}

		cout << ans << "\n";
		ans = 0;
		succession = 1;
	}

	return 0;
}

