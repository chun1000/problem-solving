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
    int N, M; cin >> N >> M;

    vector<string> v(N+1);
    map<string, int> m;

    for(int i = 1; i <= N; ++i) {
        string s; cin >> s;
        v[i] = s;
        m[s] = i;
    }

    for(int i = 0; i < M; ++i) {
        string s; cin >> s;
        if(!s.empty() && all_of( s.begin(), s.end(), ::isdigit)) {
            int a = stoi(s);
            cout << v[a] << '\n';
        }
        else {
            cout << m[s] << '\n';
        }
    }

    cout << endl;
    
    return 0;
}
