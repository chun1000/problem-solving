#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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

int N;
vector<int> nums;
int pl, mi, mu, di;
int max_val = -1500000000;
int min_val = 1500000000;

void dfs(int cnt, int ans) {
    if(cnt == N) {
        min_val = min(min_val, ans);
        max_val = max(max_val, ans);
        return;
    }

    if(pl > 0) {
        pl--;
        dfs(cnt + 1, ans + nums[cnt]);
        pl++;
    }
    if(mi > 0) {
        mi--;
        dfs(cnt+1, ans - nums[cnt]);
        mi++;
    }
    if(mu > 0) {
        mu--;
        dfs(cnt+1, ans*nums[cnt]);
        mu++;
    }
    if(di > 0) {
        di--;
        dfs(cnt+1, ans/nums[cnt]);
        di++;
    }
}

int main()
{
    use_boj_io();
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int tmp; cin >> tmp;
        nums.push_back(tmp);
    }

    cin >> pl >> mi >> mu >> di;

    dfs(1, nums[0]);

    cout << max_val << endl;
    cout << min_val << endl;

    return 0;
}
