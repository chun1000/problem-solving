#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <bitset>
#include <climits>
#include <queue>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    use_boj_io();

    int N, M; cin >> N >> M;
    vector<vector<pair<int, int>>> adjacency_list(N+1, vector<pair<int,int>>());
    for(int i = 0; i < M; ++i) {
        int u, v, w; cin >> u >> v >> w;
        adjacency_list[u].push_back({w, v});
    }
    int from, to; cin >> from >> to;

    vector<int> d(N+1, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    d[from] = 0;
    pq.push({0, from});

    while(!pq.empty()) {
        int dist, node; tie(dist, node) = pq.top();
        pq.pop();

        if(d[node] < dist) continue;

        for(const auto & item : adjacency_list[node]) {
            int dest_node, dest_dist; tie(dest_dist, dest_node) = item;
            if(dist+dest_dist < d[dest_node]) {
                d[dest_node] = dist + dest_dist;
                pq.push({d[dest_node], dest_node});
            }
        }
    }

    cout << d[to] << endl;

    return 0;
}

