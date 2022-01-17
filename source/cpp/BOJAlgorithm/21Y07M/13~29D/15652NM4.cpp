#include <iostream>
#include <vector>

using namespace std;

void dfs(int *arr, int N, int M, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	int idx;

	if (cnt == 0) idx = 1;
	else idx = arr[cnt - 1];

	for (int i = idx; i <= N; i++)
	{
		arr[cnt] = i;
		dfs(arr, N, M, cnt + 1);
	}
}

int main()
{
	int N, M;
	int arr[9];

	cin >> N >> M;
	dfs(arr, N, M, 0);

	return 0;
}