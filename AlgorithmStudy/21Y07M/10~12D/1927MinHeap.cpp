#include <queue>
#include <iostream>
#include <ios>
#include <functional>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);

    priority_queue<int, vector<int>, greater<int>> my_queue;
    int N, i_temp;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> i_temp;

        if(i_temp == 0)
        {
            if(my_queue.empty()) cout << "0\n";
            else
            {
                cout << my_queue.top() << '\n';
                my_queue.pop();
            }
        }
        else
        {
            my_queue.push(i_temp);
        }
    }

    return 0;
}