#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 13> a;
    a.at(0) = 1;
    a.at(1) = 1;

    int N;
    cin >> N;

    for(int i = 2; i <= N; i++) {
        a[i] =  a[i-1]*i;
    }

    cout << a[N];
    return 0;
}
