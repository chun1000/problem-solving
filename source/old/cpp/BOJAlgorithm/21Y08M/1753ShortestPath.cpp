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
//���� ���� ����� �ӵ� ����

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
	//��������Ʈ�� ���� �ִ´�.

	distance[K] = 0;

	for (int i = 1; i <= V; i++) {
		pq.push({ distance[i], i });
	}
	//�ʱ� ������ ����ִ´�.

	int cur_dist, cur_node;
	while (!pq.empty()) {
		tie(cur_dist, cur_node) = pq.top();
		pq.pop();
		//���� ª�� distance�� �̴´�.

		for (auto item : adjacency_list[cur_node]) {
			tie(w, v) = item;
			if (distance[v] > distance[cur_node] + w) {
				distance[v] = distance[cur_node] + w;
				pq.push({ distance[v], v });
				//���� ��忡�� w�� ���� ���� v������ ���ݱ��� ��ϵ� �ּҰŸ�����
				//ª���� �̸� �������ְ�, ���ŵ� ��带 ť�� ����ִ´�.
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

