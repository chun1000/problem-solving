#include <ios>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	//ios::sync_with_stdio(false);

	int T;
	stack<char> my_stack;

	cin >> T;
	string input_line;
	bool is_valid;

	for (int i = 0; i < T; i++)
	{
		is_valid = true;
		cin >> input_line;
		for (char c : input_line)
		{
			if (c == '(') my_stack.push('(');
			else if (!my_stack.empty()) my_stack.pop();
			else is_valid = false;
		}
		if (!my_stack.empty()) is_valid = false;

		if (is_valid) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}