#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

void trim(string& s)
{
	s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
		return !isspace(ch);
	}));

	s.erase(find_if(s.rbegin(), s.rend(), [](int ch) {
		return !isspace(ch);
	}).base(), s.end());
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string str;
	getline(cin, str);
	trim(str);
	vector<string> ans;
	stringstream ss(str);
	string temp;

	while (getline(ss, temp, ' ')) {
		ans.push_back(temp);
	}

	cout << ans.size();
	
}