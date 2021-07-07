#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int max_val = -1, max_idx, temp;

	for (int i = 1; i <= 9; i++)
	{
		cin >> temp;
		if (temp > max_val)
		{
			max_val = temp;
			max_idx = i;
		}
	}

	cout << max_val << "\n" << max_idx << "\n";
	return 0;
}