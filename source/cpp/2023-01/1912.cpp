#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();

    constexpr int MIN = -10000;
    int N; cin >> N;
    vector<int> dp; dp.reserve(N);
    int tmp; cin >> tmp;
    dp.push_back(tmp);
    

    for(int i = 1; i < N; ++i) {
        int tmp; cin >> tmp;
        dp.emplace_back(max(tmp, dp.back()+tmp));
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;


	return 0;
}

