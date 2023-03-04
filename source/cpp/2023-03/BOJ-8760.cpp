#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <tuple>
#include <queue>
#include <regex>

using namespace std;

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
    int Z; cin >> Z;
    for(int i = 0; i < Z; ++i) {
        int W, K; cin >> W >> K;
        cout << W*K/2 << '\n';
    }

    cout << endl;
    return 0;
}
