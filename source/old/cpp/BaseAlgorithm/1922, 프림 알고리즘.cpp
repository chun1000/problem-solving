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
		//C++�� �켱���� ť�� ū������ ������.
		//�ּڰ��� ã�µ� �����Ƽ� ������ ������
		//�ջ��Ҷ��� �ٽ� ����� �������ֱ�.
	}

	priority_queue<pair<int, int>> pq;

	visit[1] = true;
	for (auto item : adjacency_list[1]) {
		pq.push(item);
	}
	//�ʱ� ������ 1�� ������ ���� 1�� �ȿ� �ִ� �������� �� �ִ´�.

	int sum = 0;
	int cur_weight, cur_vertex;
	while (!pq.empty()) {
		cur_weight = pq.top().first;
		cur_vertex = pq.top().second;
		pq.pop();
		//���� ���� ���� ����� ������ ����.

		if (!visit[cur_vertex]) {
			sum -= cur_weight;
			visit[cur_vertex] = true;
			for (auto item : adjacency_list[cur_vertex]) {
				pq.push(item);
			}
		}
		//���� ���� ���� ����� ������ ���� �湮���� �ʾҴٸ� �����ְ�
		//�湮 ǥ�ø��ϰ�, ����� ������ �� �־��ش�.
	}	

	cout << sum;

	return 0;
}

