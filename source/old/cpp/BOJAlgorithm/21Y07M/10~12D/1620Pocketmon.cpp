#include <iostream>
#include <ios>
#include <string>
#include <unordered_map>

using namespace std;



int main()
{
    //ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    unordered_map<int, string> my_int_map;
    unordered_map<string, int> my_string_map;
    string temp;

    cin >> N >> M;

    for(int i = 1; i <= N; i++)
    {
        cin >> temp;
        
        my_int_map[i] = temp;
        my_string_map[temp] = i;
    }

    for(int i = 0; i < M; i++)
    {
        cin >> temp;
        if(isdigit(temp[0]))
        {
            cout << my_int_map[stoi(temp)] << '\n';
        }
        else
        {
            cout << my_string_map[temp] << '\n';
        }
    }

    return 0;
}