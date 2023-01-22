#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N, temp;
    cin >> N;

    vector<int> vec;
    vec.reserve(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    sort(vec.begin(), vec.end());

    for(int num : vec)
    {
        cout << num << "\n";
    }

    return 0;
}

