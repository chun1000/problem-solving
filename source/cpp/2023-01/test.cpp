#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    set<pair<int, int>> my_set;
    my_set.insert({0, 0});

    cout << (my_set.find({0, 0}) == my_set.end()) << endl;
    return 0;
}