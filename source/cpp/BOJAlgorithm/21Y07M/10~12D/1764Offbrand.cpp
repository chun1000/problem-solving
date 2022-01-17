#include <iostream>
#include <map>
#include <ios>
#include <string>
#include <vector>

using namespace std;


int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string ,int> my_map;
    vector<string> vec;
    int N, M;
    string temp;

    cin >> N >> M;

    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        my_map[temp] += 1;
    }

    for(int i = 0; i < M; i ++)
    {
        cin >> temp;
        my_map[temp] += 1;
    }

    int count = 0;

    for(auto item : my_map)
    {
        if(item.second >= 2)
        {
            count += 1;
            vec.push_back(item.first);
        }    
    }

    cout << count << '\n';
    for(auto item : vec)
    {
        cout << item << '\n';
    }

    return 0;
}
