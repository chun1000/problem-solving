#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    map<int, int> m;
    m[0] += 1;
    cout << m[0] << endl;
    cout << m[1] << endl;
    try {
    cout << m.at(2) << endl;
    }
    catch(auto e) {
        cout << e.what() << endl;
    }
    return 0;
}