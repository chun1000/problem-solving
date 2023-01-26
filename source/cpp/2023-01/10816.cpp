//모범적인 BOJ Silver등급 기초 맵 문제.
//맵은 찾고자 하는 원소가 없으면 default initialize를 진행한다. int의 경우는 0이다.

#include <iostream>
#include <ios>
#include <vector>
#include <map>

using namespace std;

map<int, int> m;
//문제에 사용하는 변수

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main() {
	use_boj_io();
    int N, M;
    int tmp;

    cin >> N;
    for(int i = 0; i < N; ++i) {
        cin >> tmp;
        m[tmp] += 1;
    }

    cin >> M;
    for(int i = 0; i < M; ++i) {
        cin >> tmp;
        cout << m[tmp] << " ";
    }
    cout << endl;

	return 0;
}

