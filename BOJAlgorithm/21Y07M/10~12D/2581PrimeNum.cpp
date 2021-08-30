#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool is_prime(int num)
{
    bool is_prime = true;

    if(num == 1) is_prime = false;
    
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0) 
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

int main()
{
    int M, N;
    bool _is_prime;

    cin >> M >> N;
    vector<int> vec;

    for(int i = M; i <= N; i++)
    {
        if(is_prime(i)) vec.push_back(i);
    }

    if(vec.size() == 0)
    {
        cout <<"-1\n";
    }
    else
    {
        cout << accumulate(vec.begin(), vec.end(), 0) << "\n";
        cout << *min_element(vec.begin(), vec.end()) << "\n";
    }
    

    return 0;
}