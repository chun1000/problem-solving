#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <bitset>

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
    bitset<10001> visit;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int V, E; cin >> V >> E;
    vector<vector<pair<int, int>>> adjacency_list(V+1, vector<pair<int,int>>()); //weight, node
    for(int i = 0; i < E; ++i) {
        int A, B, C; cin >> A >> B >> C;
        adjacency_list[A].push_back({C, B});
        adjacency_list[B].push_back({C, A});
    }

    visit[1] = true;
    for(const auto& item: adjacency_list[1])
        pq.push(item);

    int ans = 0;
    while(!pq.empty()) {
        int weight, node;
        tie(weight, node) = pq.top();
        pq.pop();

        if(!visit[node]) {
            ans += weight;
            visit[node] = true;
            for(const auto& item : adjacency_list[node]) 
                pq.push(item);
        }
    }

    cout << ans << endl;


    return 0;
}