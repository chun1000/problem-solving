#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

vector<string> SplitWithSubstr(string s, char delimiter) {
    vector<string> splited;
    size_t pos = 0, start = 0;
    string token;
    while((pos = s.find(delimiter, start)) != string::npos) {
        token = s.substr(start, pos-start);
        splited.push_back(token);
        start = pos + 1;
    }

    splited.push_back(s.substr(start , pos-start));

    return splited;
}
//메모리 11008KB, 시간 124ms

vector<string> SplitWithGetline(string s, char delimiter) {
    vector<string> splited;
    stringstream ss(s);
    string token;
    while(getline(ss, token, delimiter)) {
        splited.push_back(token);
    }
    return splited;
}
//메모리 11064KB, 시간 136ms


int main()
{
    use_boj_io();
    map<string, int> m;

    int N; cin >> N;
    for(int i = 0; i < N; ++i) {
        string s; cin >> s;
        auto st = SplitWithGetline(s, '.');
        m[st[1]] += 1;
    }

    for(auto iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << ' ' << iter->second << '\n';
    }

    cout << endl;
    return 0;
}

//TODO: 코드 깨끗히 고치고 커밋