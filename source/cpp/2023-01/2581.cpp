#include <iostream>
#include <ios>
#include <vector>
#include <cmath>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();

    int M, N;
    bool is_prime[10001];
    fill_n(is_prime, 10001, true);
    constexpr int MAX = 10001;

    cin >> M;
    cin >> N;
    
    is_prime[1] = false;
    is_prime[0] = false;

    for(int i = 2; i <= sqrt(N); ++i) {
        if(!is_prime[i]) continue;
        for(int j = i+i; j <= N; j += i) {
            is_prime[j] = false;
        }
    }

    int min_val = MAX;
    long long total  = 0;

    for(int i = M; i <= N; ++i) {
        if(is_prime[i]) {
            min_val = min(min_val, i);
            total += i;
        }
    }

    if(total == 0) {
        cout << "-1" << endl;
    }
    else {
        cout << total << '\n';
        cout << min_val << endl;
    }

	return 0;
}

