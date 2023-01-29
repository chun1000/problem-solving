#include <iostream>
#include <ios>
#include <vector>
#include <array>
#include <cmath>
#include <map>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();

    array<int, 100001> sieve {1, 1, 0};
    //std::array는 특정 생성자가 존재하지 않는다.
    //따라서 원하는 값이 있다면 fill을 사용해서 초기화를 해야한다.

    for(int i = 0; i <= sqrt(100000); ++i) {
        if(sieve[i] != 0) continue;
        for(int j = i*i; j <= 100000; j += i) {
            sieve[j] = i;
        }
    }

    int N;
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int val, n;
        map<int, int> counter;
        cin >> val;
        while(n!=1 && sieve[val] != 0) {
            counter[sieve[val]] += 1; 
            val = val / sieve[val];
        }
        counter[val] += 1;
        
        /*
        for(auto iter = counter.begin(); iter != counter.end(); iter++) {
            cout << iter->first << ' ' << iter->second << '\n';
        } 반복자 순회 이용*/

        for(const auto& item : counter) {
            cout << item.first << ' ' << item.second << '\n';
        }
    }
    cout <<endl;

	return 0;
}

