#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <map>

using namespace std;

int get_mode(vector<int> &v)
{
    map<int, int> m;
    vector<pair<int, int>> sort_vec;
    int return_val;

    for(auto item : v)
    {
        m[item] += 1;
    }
    
    for(auto item : m)
    {
        sort_vec.push_back({-item.second, item.first});
    }

    sort(sort_vec.begin(), sort_vec.end());
    
    if(sort_vec.begin()->first == (sort_vec.begin()+1)->first) return ((sort_vec.begin()+1)->second);
    else return (sort_vec.begin()->second);

}

int main()
{
    int N, temp, avg, mid, mode, range;
    vector<int> vec;
    cin >> N;

    for(int i = 0 ; i < N; i ++) 
    {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    cout << round(accumulate(vec.begin(), vec.end(), 0.0)/vec.size()) << '\n';
    cout << vec[vec.size()/2] << '\n';
    cout << get_mode(vec) << '\n';
    cout << *vec.rbegin() - *vec.begin() << '\n';

    return 0;
}