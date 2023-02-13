#include <iostream>
#include <ios>
#include <vector>
#include <queue>
#include <tuple>
#include <bitset>

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
    int ans = 0;
    char prev = '*';
    for(const auto& item : s) {
        if(item == prev) ans += 5;
        else ans += 10;
        prev = item;
    }
    cout << ans << endl;
    return 0;
}