#include <iostream>
#include <ios>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


void dfs(int cnt, int len, map<char, int> &m, vector<char>& anagram) {
    if(cnt == len) {
        cout << string(anagram.begin(), anagram.end()) << '\n';
        return;
    }

    for(const auto& item : m) {
        char key = item.first;
        if(m[key] == 0) continue;
        m[key] -= 1;
        anagram[cnt] = key;
        dfs(cnt+1, len, m, anagram);
        m[key] += 1; 
    }
}

int main()
{
    use_boj_io();
    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        string s; cin >> s;
        int len = s.length();
        map<char, int> m;
        vector<char> anagram(len);

        for(const auto& c : s) {
            m[c] += 1;
        }
        dfs(0, len, m, anagram);
    }

    cout << endl;
    return 0;
}