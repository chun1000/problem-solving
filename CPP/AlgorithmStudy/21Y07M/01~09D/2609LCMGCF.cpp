#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r;
    while(b != 0)
    {
        r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int a, b, gcd_val, lcm_val;

    cin >> a >> b;

    gcd_val = gcd(a, b);

    lcm_val = (a*b)/gcd_val;

    cout << gcd_val << '\n' << lcm_val << '\n';

    return 0;
}
