#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string str;

    for(int i =1; i <= N; i++)
    {
        str = "";
        for(int j = 0; j < i; j++) str += "*";

        cout << std::setw(N) << std::right << str << "\n";
    }

    return 0;
}