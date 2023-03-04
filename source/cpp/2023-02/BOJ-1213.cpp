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

void swap_char(char &a, char &b) {
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    use_boj_io();

    string s; cin >> s;
    vector<int> v(26);
    for(const auto& item : s) {
        v[item - 'A'] += 1;
    }

    int alpha_odd = 0;
    int alpha_odd_idx = -1;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i] % 2 != 0) {
            alpha_odd += 1;
            alpha_odd_idx = i;
        }
    }

    if(alpha_odd > 1) {
        cout << "I'm Sorry Hansoo" << endl;
        return 0;
    }

    s = "";
    if(alpha_odd_idx != -1) {
        s += char(alpha_odd_idx + 'A');
        v[alpha_odd_idx] -= 1;
    }


    for(int i = v.size()-1; i >= 0; --i) {
        while(v[i] > 0) {
            s = char('A'+i) + s + char('A'+i);
            v[i] -= 2;
        }
    }

    cout << s << endl;
    return 0;
}
