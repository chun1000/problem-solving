#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
    string input_line;
    int end_idx;
    bool is_palindrome;

    while(true)
    {
        cin >> input_line;

        if(input_line == "0")
        {
            break;
        }
        else
        {
            end_idx = input_line.length()/2;
            is_palindrome = true;
            for(int i = 0; i < end_idx; i++)
            {
                if(input_line[i] != input_line[input_line.length()-i-1])
                {
                    is_palindrome = false;
                }
            }

            if(is_palindrome) cout << "yes\n";
            else cout << "no\n";
        }

    }

    return 0;
}