#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);

    int N, temp;
    vector<pair<int, int>> pos;
    

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        pos.push_back({temp, i});
    }
    vector<int> ans(N);

    sort(pos.begin(), pos.end());

    int a, b, past_val = 2000000000;
    int idx = -1;
    for(auto item : pos)
    {
        if(past_val != item.first) idx++;
        ans[item.second] = idx;
        
        past_val = item.first;
    }

    for(auto item : ans)
    {
        cout << item << " ";
    }

    return 0;
}