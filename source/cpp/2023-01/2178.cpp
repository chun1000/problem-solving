#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <algorithm>
#include <set>
#include <tuple>
#include <queue>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

struct Data {
    int N;
    int M;
    vector<vector<char>> board;
};
//풀이에 사용하는 변수

Data input() {
    char tmp;

    Data d;
    cin >> d.N >> d.M;
    d.board = vector<vector<char>>(d.N);

    for(int i = 0; i < d.N; ++i) {
        for(int j = 0; j < d.M; ++j) {
            cin >> tmp;
            d.board[i].push_back(tmp);
        }
    }
    return d;
}
//입력

void solve(Data& d) {
    pair<int, int> diff[4] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    set<pair<int, int>> visited;
    queue<tuple<int, int, int>> q;

    q.push({0, 0, 1});
    visited.insert({0, 0});

    while(!q.empty()) {
        int x, y, dist;
        tie(x, y, dist) = q.front();
        q.pop();

        if(x==d.N-1 && y == d.M-1) {
            cout << dist << endl;
            break;
        }

        for(int i = 0; i < 4; ++i) {
            int x_new = x  + diff[i].first;
            int y_new = y + diff[i].second;

            if(x_new < 0 || x_new >= d.N || y_new < 0 || y_new >= d.M) continue;
            if(visited.find({x_new, y_new}) != visited.end()) continue;
            if(d.board[x_new][y_new] == '0') continue;

            visited.insert({x_new, y_new});
            q.push({x_new, y_new, dist+1});
        }
    }
}
//풀이

int main() {
	use_boj_io();
	Data d = input();
	solve(d);

	return 0;
}

