#include <iostream>
#include <vector>
#include <ios>
#include <string>

//제약사항: 자료구조는 벡터만 사용.

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string cmd;
	int num, head = 0, tail = -1;
	cin >> N;
	vector<int> v;
	v.reserve(100000);

	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> num;
			v.push_back(num);
			tail += 1;
		}
		else if (cmd == "pop") {
			if (head > tail) {
				cout << "-1\n";
			}
			else {
				num = v[head];
				head++;
				cout << num << "\n";
			}
		}
		else if (cmd == "size") {
			cout << tail - head + 1 << "\n";
		}
		else if (cmd == "empty") {
			if (head > tail) cout << "1\n";
			else cout << "0\n";
		}
		else if (cmd == "front") {
			if (head > tail) cout << "-1\n";
			else {
				cout << v[head] << "\n";
			}
		}
		else if (cmd == "back") {
			if (head > tail) cout << "-1\n";
			else cout << v[tail] << "\n";
		}
	}

	return 0;
}