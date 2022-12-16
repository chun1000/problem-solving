#include <iostream>
#include <ios>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> N >> M;

	int a, b, c;

	vector<bool> visit(N+1, false);
	vector <vector<pair<int, int>>> adjacency_list(N+1, vector<pair<int, int>>());
	
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		adjacency_list[a].push_back({ -c, b });
		adjacency_list[b].push_back({ -c, a });
		//C++은 우선순위 큐가 큰값부터 보낸다.
		//최솟값을 찾는데 귀찮아서 음수로 뒤집고
		//합산할때만 다시 양수로 뒤집어주기.
	}

	priority_queue<pair<int, int>> pq;

	visit[1] = true;
	for (auto item : adjacency_list[1]) {
		pq.push(item);
	}
	//초기 값으로 1번 정점을 고르고 1번 안에 있는 아이템을 다 넣는다.

	int sum = 0;
	int cur_weight, cur_vertex;
	while (!pq.empty()) {
		cur_weight = pq.top().first;
		cur_vertex = pq.top().second;
		pq.pop();
		//가장 작은 선에 연결된 정점을 본다.

		if (!visit[cur_vertex]) {
			sum -= cur_weight;
			visit[cur_vertex] = true;
			for (auto item : adjacency_list[cur_vertex]) {
				pq.push(item);
			}
		}
		//가장 작은 선에 연결된 정점을 보고 방문하지 않았다면 더해주고
		//방문 표시를하고, 연결된 선들을 다 넣어준다.
	}	

	cout << sum;

	return 0;
}

