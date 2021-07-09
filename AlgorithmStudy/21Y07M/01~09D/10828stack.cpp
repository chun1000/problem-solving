#include <iostream>
#include <stack>
#include <string>
#include <ios>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);

    stack<int> my_stack;
    int N, num;
    string cmd;

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> cmd;

        if(cmd == "push")
        {
            cin >> num;
            my_stack.push(num);
        }
        else if(cmd == "pop")
        {
            if(my_stack.empty())
            {
                cout << "-1\n"; 
            }
            else
            {
                num = my_stack.top();
                my_stack.pop();
                cout << num << '\n';
            }
            
        }
        else if(cmd == "size")
        {
            cout << my_stack.size() << '\n';
        }
        else if(cmd == "empty")
        {
            if(my_stack.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if(cmd == "top")
        {
            if(my_stack.empty())
            {
                cout << "-1\n";
            }
            else
            {
                num = my_stack.top();
                cout << num << '\n';
            }
        }
    }



    return 0;
}