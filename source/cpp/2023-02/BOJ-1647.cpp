#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>

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
        int A, B, C; cin >> A >> B >> C;
        adjacency_list[A].push_back({C, B});
        adjacency_list[B].push_back({C, A});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    //weight, node
    vector<bool> visit(N+1);

    visit[1] = true;
    for(const auto& item : adjacency_list[1]) 
        pq.push(item);

    int ans = 0;
    int max_val = -1;
    while(!pq.empty()) {
        int weight, node; tie(weight, node) = pq.top(); 
        pq.pop();

        if(!visit[node]) {
            visit[node] = true;
            max_val = max(weight, max_val);
            ans += weight;
            for(const auto& item: adjacency_list[node]) 
                pq.push(item);
        }
    }

    cout << ans-max_val << endl;
    return 0;
}