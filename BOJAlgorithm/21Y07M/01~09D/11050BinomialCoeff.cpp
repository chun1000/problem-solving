#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    vector<vector<int>> vec(n+1, vector<int>(k+1, 0));
    
    for(int i = 1; i  <= n; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            if(i == j || j == 0) vec[i][j] = 1;
            else vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
        }
    }

    cout << vec[n][k] << '\n';
    return 0;
}