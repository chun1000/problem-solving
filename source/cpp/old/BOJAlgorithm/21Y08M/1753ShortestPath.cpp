#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#define INF 400000

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();

	int V, E, K;

	cin >> V >> E;
	cin >> K;

	vector<int> distance(V + 1, INF);
	vector < vector<pair<int, int>>> adjacency_list(V + 1, vector<pair<int, int>>());
	priority_queue < pair<int, int>, vector < pair<int, int>>, greater<pair<int, int>>> pq;

	int u, v, w;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		adjacency_list[u].push_back({ w, v });
	}
	//인접리스트에 값을 넣는다.

	distance[K] = 0;

	for (int i = 1; i <= V; i++) {
		pq.push({ distance[i], i });
	}
	//초기 노드들을 집어넣는다.

	int cur_dist, cur_node;
	while (!pq.empty()) {
		tie(cur_dist, cur_node) = pq.top();
		pq.pop();
		//가장 짧은 distance를 뽑는다.

		for (auto item : adjacency_list[cur_node]) {
			tie(w, v) = item;
			if (distance[v] > distance[cur_node] + w) {
				distance[v] = distance[cur_node] + w;
				pq.push({ distance[v], v });
				//현재 노드에서 w를 더한 값이 v까지의 지금까지 기록된 최소거리보다
				//짧으면 이를 갱신해주고, 갱신된 노드를 큐에 집어넣는다.
			}
		}
	}

	for (int i = 1; i <= V; i++) {
		if (distance[i] == INF) {
			cout << "INF\n";
		}
		else {
			cout << distance[i] << "\n";
		}
	}


	return 0;
}

