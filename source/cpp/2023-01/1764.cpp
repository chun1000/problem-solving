#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
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

    int N, M, ans;
    vector<string> v;
    set<string> s;
    string tmp;

    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        cin >> tmp;
        s.insert(tmp);
    }

    ans = 0;
    for(int i = 0; i < M; ++i) {
        cin >> tmp;
        if(s.find(tmp) != s.end()) {
            v.push_back(tmp);
            ans += 1;
        }
    }


    sort(v.begin(), v.end());
    cout << ans << '\n';
    for(const auto& item : v) {
        cout << item << '\n';
    }
    
    cout << endl;
	return 0;
}

