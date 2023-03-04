#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <algorithm>
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
    vector<vector<pair<int, int>>> adjacency_list(N+1, vector<pair<int, int>>());
    for(int i = 0; i < M+1; ++i) {
        int A, B, C; cin >> A >> B >> C;
        int weight = -1;
        if(C==1) weight = 0;
        else weight = 1;
        adjacency_list[A].push_back({weight, B});
        adjacency_list[B].push_back({weight, A});
    }

    vector<bool> visit(N+1);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq_gt;
    visit[0] = true;
    for(const auto& item : adjacency_list[0]) pq_gt.push(item);

    int min_fatigue = 0;
    while(!pq_gt.empty()) {
        int weight, node; tie(weight, node) = pq_gt.top();
        pq_gt.pop();

        if(!visit[node]) {
            min_fatigue += weight;
            visit[node] = true;
            for(const auto& item : adjacency_list[node]) pq_gt.push(item);
        }
    }

    visit = vector<bool>(N+1);
    priority_queue<pair<int, int>> pq_lt;
    visit[0] = true;
    for(const auto & item : adjacency_list[0]) pq_lt.push(item);

    

    int max_fatigue = 0;
    while(!pq_lt.empty()) {
        int weight, node; tie(weight, node) = pq_lt.top();
        pq_lt.pop();

        if(!visit[node]) {
            max_fatigue += weight;
            visit[node] = true;
            for(const auto& item : adjacency_list[node]) {
                pq_lt.push(item);
            }
        }
    }

    cout << max_fatigue*max_fatigue - min_fatigue*min_fatigue << endl;
    return 0;
}