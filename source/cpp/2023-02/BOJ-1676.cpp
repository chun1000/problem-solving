#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

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

    int N; cin >> N;
    int cnt = 0;
    for(int i = N; i > 0; --i) {
        int n = i;
        while(n %5 == 0) {
            cnt += 1;
            n /= 5;
        }
    }
    cout << cnt << endl;
    return 0;
}
