#include <iostream>
#include <ios>
#include <algorithm>

using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    double *score = new double[N];
    double max_val = -1;

    for(int i = 0; i < N; i++)
    {
        cin >> score[i];
        max_val = max(max_val, score[i]);
    }

    //입력 끝

    double summation = 0;
    for(int i =0; i< N; i++)
    {
        summation += (score[i]/max_val)*100;
    }

    cout << (summation/N);

    return 0;
}
