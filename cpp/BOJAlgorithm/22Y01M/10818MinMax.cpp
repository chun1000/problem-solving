//브론즈, min_elem, max_elem 활용

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

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
	int N, temp;
	vector<int> v;
	cin >> N;

	
	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	cout << *min_element(v.begin(), v.end()) << " ";
	cout << *max_element(v.begin(), v.end()) << "\n";
	return 0;
}

