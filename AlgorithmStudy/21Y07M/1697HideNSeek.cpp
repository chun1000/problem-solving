#include <iostream>
#include <ios>
#include <deque>
#include <unordered_set>

using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    deque<pair<int, int>> my_queue; //(pos, step)
    unordered_set<int> visited;

    cin >> N >> K;

    int cur_step, cur_pos;
    int ans, new_pos;
    visited.insert(N);
    my_queue.push_front({N, 0});
    int diffs[3] = {1, -1, 2};

    while(!my_queue.empty())
    {
        cur_pos = my_queue.back().first;
        cur_step = my_queue.back().second;
        my_queue.pop_back();

        if(cur_pos == K) 
        {
            ans = cur_step;
            break;
        }    

        for(int item : diffs)
        {
            if(item == 2)
                new_pos = cur_pos*2;
            else
                new_pos = cur_pos + item;

            if(new_pos < 0 || new_pos > 100000) continue;

            if(visited.find(new_pos) != visited.end()) continue;

            visited.insert(new_pos);
            my_queue.push_front({new_pos, cur_step + 1});
        }
    }   

    cout << ans;

    return 0;
}