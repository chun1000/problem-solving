#include <iostream>
#include <ios>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);
    int N, M;
    unordered_map<string, string> m;
    string site, pw;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        cin >> site >> pw;
        m[site] = pw;
    } 

    for(int i = 0; i < M; i++)
    {
        cin >> site;
        cout << m[site] << '\n';
    }

    return 0;
}