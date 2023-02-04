#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <algorithm>

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
    int n; cin >> n;
    vector<int> dp(n+1, 1);
    
    vector<int> num_arr(n+1);
    for(int i = 1; i <= n; ++i) {
        int tmp; cin >> tmp;
        num_arr[i] = tmp;
    }

    //자기 자신보다 작은 것 중 가장 큰 배열 + 1
    for(int i = 2; i <= n; ++i) {
        for(int j = 1; j < i; ++j) {
            if(num_arr[j] < num_arr[i]) {
                dp[i] = max(dp[j]+1, dp[i]);
            }
        }
    }

    cout << *max_element(dp.begin(), dp.end()) << endl;

    return 0;
}
