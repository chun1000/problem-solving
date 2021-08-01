#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>
#include <stack>
#define INF 1e9
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

	int n, m;

	cin >> n >> m;

	vector<vector<int>> distance(n + 1, vector<int>(n+1, INF));
	vector<vector<int>> before(n + 1, vector<int>(n + 1, -1));

	int a, b, c;

	for (int i = 1; i <= n; i++) {
		distance[i][i] = 0;
	}
	//자기 자신으로 가는 거리는 0

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		distance[a][b] = min(c, distance[a][b]);
		before[a][b] = a; //before[x][y] = z x->y 일 때 z를 거친다.
	}

	for (int z = 1; z <= n; z++) {
		for (int x = 1; x <= n; x++) {
			for (int y = 1; y <= n; y++) {
				if (distance[x][y] > distance[x][z] + distance[z][y]) {
					distance[x][y] = distance[x][z] + distance[z][y];
					before[x][y] = before[z][y];
					//중간 경유지를 거친 값이 더 짧으면 그 값으로 갱신해준다.
					//또, 경유지를 거쳐갔다는 경로 행렬을 업그레이드 해준다.
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (distance[i][j] >= INF) {
				cout << " ";
			}
			else {
				cout << "\n";
			}
		}
	}

	/*
	이 문제를 백준에 그대로 제출하면 출력부가 없어서 틀렸다고 나온다.
	원래 Python으로 스택 출력 방식으로 구현했었는데
	재귀로 더 잘 구현한 코드가 있어서, 새로운 방식을 써보기를 권장함.
	*/


	return 0;
}

