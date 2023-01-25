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


int main() {
	use_boj_io();
    int E, S, M;
    cin >> E >> S >> M;

    int x = 1;
    while(true) {
        if((x-E) % 15 == 0 && (x-S) % 28 == 0 && (x - M)  % 19 == 0) {
            cout << x << endl;
            break;
        }
        x+=1;
    }

	return 0;
}

