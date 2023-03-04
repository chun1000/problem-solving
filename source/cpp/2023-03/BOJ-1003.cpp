#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <map>

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

    vector<int> dp_zero(41), dp_one(41);
    dp_zero[0] = 1;
    dp_zero[1] = 0;
    dp_one[0] = 0;
    dp_one[1] = 1;

    for(int i = 2; i <= 40; ++i) {
        dp_zero[i] = dp_zero[i-1] + dp_zero[i-2];
        dp_one[i] = dp_one[i-1] + dp_one[i-2];
    } 

    int T; cin >> T;
    for(int i = 0; i < T; ++i) {
        int N; cin >> N;
        cout << dp_zero[N] << " " << dp_one[N] << '\n';
    }

    cout << endl;
    return 0;
}
