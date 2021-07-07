#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int T, R;
	string str;
	cin >> T;
	vector<char> v;

		
	for (int i = 0; i < T; i++)
	{
		cin >> R >> str;
		v = vector<char>(str.begin(), str.end());
		for (auto iter = v.begin(); iter != v.end(); iter++)
		{
			for (int j = 0; j < R; j++) cout << (*iter);
		}
		cout << "\n";
	}

	return 0;
}