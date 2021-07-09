#include <iostream>
#include <ios>
#include <queue>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

bool is_overlap(int a_start, int a_finish,  int b_start, int b_finish)
{
    if(a_finish < b_start || b_finish < a_start) return false;
    else return true;
}


int main()
{
    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, start, fin;
    vector<pair<int, int>> board;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> start >> fin;
        board.push_back({fin, start});
    }

    sort(board.begin(), board.end());

    pair<int, int> selected = {-1, -1};
    int count = 0;

    for(auto item : board)
    {
        if(!is_overlap(selected.second, selected.first, item.second, item.first))
        {
            count++;
            selected = item;
        }
    }

    cout << count;

    return 0;
}