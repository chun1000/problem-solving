#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;


void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int GCD(int a, int b) {
    int n;
    if(a < b) swap(a, b);
    while(b != 0) {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main() {
	use_boj_io();
    cout << fixed;
    cout.precision(7);

    int N; cin >> N;
    vector<int> A, A_;
    for(int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    int X; cin >> X;

    for(const auto& item : A) {
        if(GCD(item, X) == 1) A_.push_back(item);
    }

    cout << (double)accumulate(A_.begin(), A_.end(), 0L)/(double)A_.size() << endl;

	return 0;
}

