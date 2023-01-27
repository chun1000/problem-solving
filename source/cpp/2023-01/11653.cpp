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

    int N;
    bool is_prime = false;

    cin >> N;


    while(!is_prime) {
        is_prime = true;
        for(int i = 2; i <= sqrt(N); ++i) {
            if(N%i==0) {
                is_prime = false;
                N /= i;
                cout << i << "\n";
                break;
            }
        }
    }

    if(N!=1) cout << N << endl;
    

	return 0;
}

