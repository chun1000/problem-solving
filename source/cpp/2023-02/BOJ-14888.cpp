#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <stack>
#include <tuple>

using namespace std;
using ll = long long;

int min_ = 1000000001;
int max_ = -1000000001;
vector<int> arr;
int N;
int add_, minus_, mult_, div_;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

void dfs(int cnt, int ans) {
    if(cnt == N) {
        min_ = min(ans, min_);
        max_ = max(ans, max_);
        return;
    }

    if(add_ > 0) {
        add_ -=1;
        dfs(cnt+1, ans+arr[cnt]);
        add_ += 1;
    }
    if(minus_ > 0) {
        minus_ -= 1;
        dfs(cnt+1, ans-arr[cnt]);
        minus_ += 1;
    }
    if(mult_ > 0) {
        mult_ -= 1;
        dfs(cnt+1, ans*arr[cnt]);
        mult_ += 1;
    }
    if(div_ > 0) {
        div_ -= 1;
        dfs(cnt+1, ans/arr[cnt]);
        div_ += 1;
    } 

}

int main()
{
    use_boj_io();
    cin >> N;
    for(int i =0; i < N; ++i) {
        int tmp; cin >> tmp;
        arr.push_back(tmp);
    }

    cin >> add_ >> minus_ >> mult_ >> div_;
    dfs(1, arr[0]);
    cout << max_ << endl;
    cout << min_ << endl;

    return 0;
}