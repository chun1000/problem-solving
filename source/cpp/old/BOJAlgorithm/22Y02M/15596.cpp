#include <iostream>
#include <ios>
#include <vector>

long long sum(std::vector<int>& a) {
	long long ans = 0;
	for (auto item : a) {
		ans += item;
	}
	return ans;
}

int main() {

	std::vector<int> a = { 1, 2, 3, 4 };
	std::cout << sum(a);
	return 0;
}

