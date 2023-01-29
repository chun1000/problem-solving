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

    int n, T;
    cin >> T;
    for(int i = 0; i < T; ++i) {
        cin >> n;
        int j = n;
        while(true) {
            bool is_prime = true;
            for(int k = 2; k <= sqrt(j); ++k) {
                if(j%k==0) {
                    is_prime = false;
                    break;
                }
            }
            if(is_prime && j > 1) {
                cout << j << '\n';
                break;
            }
            j += 1;
        }
    }
    cout << endl;
    

	return 0;
}

