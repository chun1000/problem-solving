#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<char, int> hash_map;
    string str;
    cin >> str;

    for(int i =0; i < str.length(); i++)
    {
        hash_map[toupper(str[i])] += 1;
    }

    int max_val = 0;
    int temp = 0;
    bool is_dup = false;
    char max_char;

    for(auto iter = hash_map.begin(); iter != hash_map.end(); ++iter)
    {
        temp = iter->second;
        if(temp > max_val) 
        {
            max_val = temp;
            max_char = iter->first;
            is_dup = false;
        }
        else if(temp == max_val) 
        {
            is_dup = true;
        }
    }

    if(is_dup)
    {
        cout << "?";
    }
    else
    {
        cout << max_char;
    }
    return 0;
}