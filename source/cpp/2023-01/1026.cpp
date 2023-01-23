#include <iostream>
#include <string>
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

struct Data {
	vector<int> A;
    vector<int> B;
    int N;
};
//풀이에 사용하는 변수

Data input() {
    Data d;
    int N, temp;
    cin >> N;
    d.N = N;
    for(int i = 0; i < N; ++i) {
        cin >> temp;
        d.A.push_back(temp);
    }

    for(int i = 0; i < N; ++i) {
        cin >> temp;
        d.B.push_back(temp);
    }
    return d;
}
//입력

void solve(Data& d) {
    sort(d.A.begin(), d.A.end());
    sort(d.B.begin(), d.B.end(), greater<>());

    int ans = 0;
    for(int i = 0; i < d.N; ++i) {
        ans += d.A[i]*d.B[i];
    }

    std::cout << ans << std::endl;
}
//풀이

int main() {
	use_boj_io();
	Data d = input();
	solve(d);

	return 0;
}

