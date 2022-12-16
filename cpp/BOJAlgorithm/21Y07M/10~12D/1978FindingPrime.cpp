#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <cmath>

using namespace std;

bool IsPrimeNum(int num)
{
    if(num==1) return false;

    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) return false;
    }

    return true;
}

int main()
{
    int N, temp;
    cin >> N;
    vector<int> vec;

    for(int i = 0 ; i < N; i++)
    {
        cin >> temp;
        vec.push_back(temp);
    }

    int count = 0;

    for(auto item : vec)
    {
        if(IsPrimeNum(item)) count++;
    }

    cout << count;
    return 0;
}