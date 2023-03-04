#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <tuple>
#include <queue>

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

    int N, K; cin >> N >> K;
    bitset<200002> visit;

    queue<pair<int, int>> q; //pos, cnt

    q.push({N, 0});
    visit[N] = true;
    while(!q.empty()) {
        int pos, cnt; tie(pos, cnt) = q.front();
        q.pop();

        if(pos == K) {
            cout << cnt << endl;
            return 0;
        }

        for(int i = 0; i < 3; ++i) {
            int new_pos = 0;
            if(i == 0) {
                new_pos = pos + 1;
            }
            else if(i == 1) {
                new_pos = pos - 1;
            }
            else {
                new_pos = pos*2;
            }

            if(new_pos < 0 || new_pos >= 200002) continue;
            if(visit[new_pos]) continue;
            visit[new_pos] = true;
            q.push({new_pos, cnt+1});
        }
    }
    return 0;
}
