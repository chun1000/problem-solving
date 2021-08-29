#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string s;

    for(int i =1; i <= N; i++)
    {
        s = "";
        for(int j=0; j < i; j++) s += "*";

        cout << s << endl;
    }

    return 0;
}