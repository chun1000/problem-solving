#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int power(int a, int b, int c)
{
	if (b == 0)
	{
		return 1;
	}

	long long temp;
	temp = power(a, b / 2, c);

	if (b % 2 == 0) // Â¦¼ö¸é
	{
		return (1LL* temp * temp) % c;
	}
	else
	{
		return (((1LL* temp * temp)%c)*a % c);
	}
}

int main()
{
	int A, B, C;

	cin >> A >> B >> C;

	cout << power(A, B, C);

	return 0;
}