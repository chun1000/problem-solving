//Bronze. max element 활용


#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
	array<pair<int, int>, 9> a;
	int temp;

	for (int i = 0; i < 9; i++) {
		cin >> temp;
		a[i] = {temp, i};
	}

	auto ans = *max_element(a.begin(), a.end(), [](pair<int, int> a, pair<int, int> b) {return a.first < b.first; });

	cout << ans.first << "\n" << ans.second + 1;
	return 0;
}