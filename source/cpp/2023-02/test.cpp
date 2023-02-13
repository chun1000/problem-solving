#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<int, 10> a {0, };
    fill_n(a.begin(), 2, 5);
    for(const auto& item: a) {
        cout << item << ", ";
    }
    cout <<endl;
    
    return 0;
}
