#include <iostream>
#include <vector>
#define MOD_NUM 1000000007

using namespace std;

int main()
{
	long long n;

	cin >> n;

	int ans = 1;
	int old1 = 0, old2 = 1;

	for (long long i = 2; i <= n; i++)
	{
		ans = (old1 + old2) % MOD_NUM;
		old1 = old2;
		old2 = ans;
	}


	if (n == 0) ans = 0;
	cout << ans;
	return 0;
}