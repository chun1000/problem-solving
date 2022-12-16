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
//���� ���� ����� �ӵ� ����

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
	//�ڱ� �ڽ����� ���� �Ÿ��� 0

	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		distance[a][b] = min(c, distance[a][b]);
		before[a][b] = a; //before[x][y] = z x->y �� �� z�� ��ģ��.
	}

	for (int z = 1; z <= n; z++) {
		for (int x = 1; x <= n; x++) {
			for (int y = 1; y <= n; y++) {
				if (distance[x][y] > distance[x][z] + distance[z][y]) {
					distance[x][y] = distance[x][z] + distance[z][y];
					before[x][y] = before[z][y];
					//�߰� �������� ��ģ ���� �� ª���� �� ������ �������ش�.
					//��, �������� ���İ��ٴ� ��� ����� ���׷��̵� ���ش�.
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
	�� ������ ���ؿ� �״�� �����ϸ� ��ºΰ� ��� Ʋ�ȴٰ� ���´�.
	���� Python���� ���� ��� ������� �����߾��µ�
	��ͷ� �� �� ������ �ڵ尡 �־, ���ο� ����� �Ẹ�⸦ ������.
	*/


	return 0;
}

