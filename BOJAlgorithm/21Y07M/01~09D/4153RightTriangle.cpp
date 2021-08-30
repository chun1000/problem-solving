#include <iostream>
#include <ios>
#include <cmath>

using namespace std;

inline void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);

    int a, b, c;

    while(true)
    {
        cin >> a >> b >> c;
        
        if(a==0 && b == 0 && c == 0) break;

        if(a > c) swap(a, c);
        if(b > c) swap(b, c);


        if(abs( pow(c, 2) -(pow(a, 2) + pow(b, 2))) < 0.1 ) cout << "right\n";
        else cout <<"wrong\n";
    }
    
    return 0;
}