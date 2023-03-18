#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;
using pos = pair<int, int>;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


int N, M;
vector<pos> chicken_houses, houses;
//입력 변수

void Input() {
    cin >> N >> M;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            int temp; cin >> temp;
            if(temp == 1) houses.push_back({i, j});
            if(temp == 2) chicken_houses.push_back({i, j});
        }
    }
}

int min_dist = INT_MAX;
vector<bool> visit(chicken_houses.size());
void dfs(int cnt, const vector<vector<int>>& chicken_dists) {
    if(cnt == M) {
        int temp = INT_MAX;
        for(int i = 0 ; i < houses.size(); ++i) {
            for(int j = 0; j < chicken_houses.size(); ++j) {
                if(!visit[j]) continue;
                temp = min(temp, chicken_dists[i][j]);
            }
        }
        
        return;
    }

    for(int i = 0; i < chicken_houses.size(); ++i) {
        if(visit[i]) continue;
        visit[i] = true;
        dfs(cnt+1, chicken_dists);
        visit[i] = false;
    }
}

void Solve() {
    vector<vector<int>> chicken_dists;
    for(const auto& house : houses) {
        vector<int> chicken_dist;
        for(const auto & chicken_house : chicken_houses) {
            chicken_dist.push_back(abs(house.first - chicken_house.first) + abs(house.second - chicken_house.second));
            cout << abs(house.first - chicken_house.first) + abs(house.second - chicken_house.second) << ", ";
        }
        chicken_dists.push_back(chicken_dist);
        cout << endl;
    }
    dfs(0, chicken_dists);

    cout << min_dist << endl;

}

int main() {
    UseFastIO();
    Input();
    Solve();
    return 0;
}