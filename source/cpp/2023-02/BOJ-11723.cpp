#include <iostream>
#include <ios>
#include <vector>
#include <bitset>

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
    bitset<21> S;
    int M; cin >> M;
    for(int i = 0; i < M; ++i) {
        string command; int num;
        cin >> command;
        if(command == "add") {
            cin >> num;
            S.set(num);
        }
        else if(command == "remove") {
            cin >> num;
            S.reset(num);
        }
        else if(command == "check") {
            cin >> num;
            if(S[num]) cout << "1\n";
            else cout << "0\n";
        }
        else if(command == "toggle") {
            cin >> num;
            S.flip(num);
        }
        else if(command == "all") {
            S.set();
        }
        else {
            S.reset();
        }
    }
    cout << endl;
    return 0;
}