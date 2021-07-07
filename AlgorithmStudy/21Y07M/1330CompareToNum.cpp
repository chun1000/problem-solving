#include <iostream>
#include <ios>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int A, B;

    cin >> A >> B;
    if(A<B) cout << "<";
    else if(A>B) cout << ">";
    else cout << "==";
}