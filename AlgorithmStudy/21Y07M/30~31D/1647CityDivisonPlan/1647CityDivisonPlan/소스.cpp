#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

class DisjointSet {
private:
	vector<int> v;
public:
	DisjointSet(int size) {
		for (int i = 0; i <= size; i++) {
			v.push_back(i);
		}
	}

	int find(int n) {
		if (n == this->v[n]) {
			return n;
		}

		this->v[n] = this->find(v[n]);
		return this->v[n];
	}

	void merge(int u, int v) {
		u = this->find(u);
		v = this->find(v);

		if (u == v) return;

		this->v[u] = v;
	}
};

int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;

	cin >> N >> M;

	int a, b, c;

	vector<bool> visit(N + 1, false);
	vector<tuple<int, int, int>> v;

	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		v.push_back({ c, b, a });
	}

	int ans = 0;
	int edge = 0;
	int cnt = 0;

	DisjointSet disjoint = DisjointSet(M);
	sort(v.begin(), v.end());

	for (auto item : v) {
		if (cnt >= N - 2) break;
		tie(c, a, b) = item;
		if (disjoint.find(a) != disjoint.find(b)) {
			ans += c;
			cnt += 1;
			disjoint.merge(a, b);
		}
	}
	
	cout << ans;

	return 0;
}

