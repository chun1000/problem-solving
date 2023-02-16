#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <climits>

using namespace std;
using ll = long long;

void use_boj_io() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    use_boj_io();
    constexpr int INF = INT_MAX;
    int V, E; cin >> V >> E;
    int K; cin >> K;
    
    vector<vector<pair<int, int>>> adjacency_list(V+1, vector<pair<int,int>>()); 
    //{weight, vertex}
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<>> pq;
    vector<int> d(V+1, INF);

    for(int i = 0; i < E; ++i) {
        int u, v, w; cin >> u >> v >> w;
        adjacency_list[u].push_back({w, v});
    }

    pq.push({0, K});
    d[K] = 0;

    while(!pq.empty()) {
        int dist, vertex; tie(dist, vertex) = pq.top();
        pq.pop();

        if(d[vertex] < dist) continue;

        for(const auto& item: adjacency_list[vertex]) {
            if(dist+item.first < d[item.second]) {
                d[item.second] = dist + item.first;
                pq.push({dist+item.first, item.second});
            }
        }
    }

    for(int i = 1; i <= V; ++i) {
        if(d[i] != INF) cout << d[i] << '\n';
        else cout << "INF\n";
    }

    cout <<endl;
    return 0;
}