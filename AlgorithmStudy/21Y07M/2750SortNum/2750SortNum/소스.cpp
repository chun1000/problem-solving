#include <iostream>
#include <ios>
#include <vector>

using namespace std;

//제약사항: 퀵소트로만 구현할 것.
//라이브러리는 벡터만 사용.

void quick_sort(vector<int> &v, int left, int right) {
	if (left >= right) return;

	int pivot = left;
	int i = left+1, j = right, temp;

	while (i <= j) {
		while ( i <= right && v[pivot] >= v[i]) {
			i++;
		}

		while (j > left && v[pivot] <= v[j]) {
			j--;
		}

		if (i > j) {
			temp = v[j];
			v[j] = v[pivot];
			v[pivot] = temp;
		}
		else {
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}

	
	
	quick_sort(v, left, j-1);
	quick_sort(v, j + 1, right);
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, in_num;
	vector<int> v;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> in_num;
		v.push_back(in_num);
	}

	quick_sort(v, 0, v.size()-1);

	for (auto item : v) {
		cout << item << '\n';
	}

	return 0;
}
