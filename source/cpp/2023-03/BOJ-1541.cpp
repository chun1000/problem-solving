#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <tuple>
#include <queue>
#include <regex>

using namespace std;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

struct Token {
    int val; //0: +, 1:-
    bool is_op;
};

int main()
{
    use_boj_io();
    string s; cin >> s;
    vector<Token> v;

    std::regex re("\\d+|\\+|\\-");
    std::smatch match;
    regex_search(s, match, re);

   while(std::regex_search(s, match, re)) {
        string mat = match.str();
        s = match.suffix();
        Token t;

        if(mat == "+") {
            t.is_op = true;
            t.val = 0;
        }
        else if(mat == "-") {
            t.is_op = true;
            t.val = 1;
        }
        else {
            t.is_op = false;
            t.val = std::stoi(mat);
        }
        v.push_back(t);
   }

   vector<int> v2;

   int acc = 0;
   for(int i = 0; i < v.size(); i+=2) {
    acc += v[i].val;
    if(v[i+1].val == 1) {
        v2.push_back(acc);
        acc = 0;
    }
   }
   v2.push_back(acc);

   int ans = v2[0];
   for(int i = 1; i < v2.size(); ++i) {
        ans -= v2[i];
   }
   
    cout << ans << endl;
    return 0;
}
