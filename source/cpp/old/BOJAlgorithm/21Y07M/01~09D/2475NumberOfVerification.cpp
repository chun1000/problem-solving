#include <iostream>
#include <ios>
#include <cmath>
#include <string>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[5];

    for(int i = 0; i < 5; i++) cin >> a[i];

    //입력 끝

    int temp = 0;

    for(int i = 0; i < 5; i++)
    {
        temp += pow(a[i], 2);
    }

    temp = temp % 10;
    cout << temp;

    return 0;
}