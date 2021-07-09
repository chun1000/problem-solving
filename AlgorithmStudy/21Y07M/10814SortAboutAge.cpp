#include <ios>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    int N, age;
    string name;
    
    vector <tuple<int, int, string>> my_vec;

    cin >> N;

    for(int i =0; i < N; i++)
    {
        cin >> age >> name;
        my_vec.push_back({age, i, name});
    }

    sort(my_vec.begin(), my_vec.end());

    for(auto item : my_vec)
    {
        cout << get<0>(item) << " " << get<2>(item) << "\n";
    }


    return 0;
}