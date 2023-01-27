#include <iostream>
#include <ios>
#include <vector>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int GCD(int x, int y) {
    int n;
    if(x < y) swap(x, y);
    while(y!=0) {
        n = x % y;
        x = y;
        y = n;
    }
    return x;
}

int main() {
	use_boj_io();
    int T, n, tmp;
    

    cin >> T;
    for(int i = 0; i < T; ++i) {
        cin >> n;
        vector<int> v;
        v.reserve(n);
        for(int j = 0; j < n; ++j) {
            cin >> tmp;
            v.push_back(tmp);
        }

        long long ans = 0;
        for(int x = 0; x < n; ++x) {
            for(int y = x+1; y <n; ++y) {
                ans += GCD(v[x], v[y]);
            }
        }

        cout << ans << endl;


    }

	return 0;
}

