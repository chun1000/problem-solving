#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(bool visit[], int N, int M, vector<int> &v, vector<int> &arr, int num, int cnt)
{
	if (cnt == M)
	{
		for (int num : arr)
		{
			cout << num << " ";
		}
		cout << '\n';

		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (visit[i]) continue;

		visit[i] = true;
		arr[cnt] = v[i];
		dfs(visit, N, M, v, arr, i + 1, cnt + 1);
		visit[i] = false;
	}
}


int main()
{
	int N, M, temp;

	cin >> N >> M;
	bool visit[8] = { 0 };

	vector<int> v;
	vector<int> arr(M, 0);

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());
	dfs(visit, N, M, v, arr, 0, 0);

	return 0;
}