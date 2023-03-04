#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <bitset>
#include <algorithm>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    use_boj_io();
    string s; cin >> s;
    for(auto iter = s.rbegin(); iter != s.rend(); iter++) {
        cout << *iter;
    }
    cout << endl;
    return 0;
}