#include <iostream>
#include <string>
using namespace std;

int main()
{
    int total = 1, temp;

    for(int i=0; i<3; i++)
    {
        cin >> temp;
        total *= temp;
    }

    string str = to_string(total);

    int *my_hash = new int[10]();

    for(int i = 0; i < str.length(); i++)
    {
        my_hash[str[i] - '0'] += 1;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << my_hash[i] << '\n';
    }

    delete my_hash;
    return 0;
}