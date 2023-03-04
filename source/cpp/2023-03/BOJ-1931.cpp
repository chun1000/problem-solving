#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <set>
#include <bitset>
#include <tuple>
#include <queue>
#include <regex>
#include <algorithm>
#include <set>

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
    return 0;
}
