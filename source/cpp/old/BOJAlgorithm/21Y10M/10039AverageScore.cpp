#include <iostream>
#include <ios>
#include <vector>
#include <array>
#include <numeric>
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
	array<int, 5> arr;
	int temp;

	for (int i = 0; i < 5; i++) {
		cin >> temp;

		if (temp > 40) {
			arr[i] = temp;
		}
		else {
			arr[i] = 40;
		}
	}
	
	cout << accumulate(arr.begin(), arr.end(), 0) / arr.size();

	return 0;
}

