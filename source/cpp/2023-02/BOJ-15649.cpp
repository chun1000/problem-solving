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

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int N, M;

void dfs(int cnt, bitset<9> &visit, vector<int> &arr)
{
    if (cnt == M)
    {
        for (const auto &item : arr)
            cout << item << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= N; ++i)
    {
        if (!visit[i])
        {
            visit[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1, visit, arr);
            visit[i] = false;
        }
    }
}

int main()
{
    use_boj_io();
    cin >> N >> M;
    bitset<9> visit;
    vector<int> arr(M);
    dfs(0, visit, arr);
    cout << endl;
    return 0;
}