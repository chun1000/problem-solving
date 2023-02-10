#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


void dfs(int cnt, int N, int M, vector<bool>& visit, vector<int> arr) {
    if(cnt == M) {
        for(const auto& item: arr) cout << item << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; ++i) {
        if(!visit[i]) {
            visit[i] = true;
            arr[cnt] = i;
            dfs(cnt+1, N, M, visit, arr);
            visit[i] = false;
        }
    }
}


int main()
{
    use_boj_io();
    int N, M; cin >> N >> M;
    vector<bool> visit(9);
    vector<int> arr(M);
    dfs(0, N, M, visit, arr);
    cout << endl;
    return 0;
}
//코드 깔끔하게 고쳐서 ReadMe에 추가.