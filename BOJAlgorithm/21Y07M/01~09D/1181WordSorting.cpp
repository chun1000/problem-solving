#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>

using namespace std;

int main()
{
    int N;
    vector <pair<int, string>> vec;
    string temp;
    cin >> N;

    for(int i =0; i < N; i++)
    {
        cin >> temp;
        vec.push_back({temp.length(), temp});
    }

    sort(vec.begin(), vec.end());
    temp = "";

    for(auto iter = vec.begin(); iter != vec.end(); iter++)
    {
        if(iter->second != temp)
        {
            cout << iter->second << "\n";
        }
        temp = iter->second;
    }


    return 0;
}