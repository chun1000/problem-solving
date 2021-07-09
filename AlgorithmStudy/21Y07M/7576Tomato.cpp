#include <iostream>
#include <ios>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, M, temp;

    cin >> N >> M;

    vector<vector<int>> board;
    vector<int> input_line;
    vector<vector<bool>> visited(M, vector<bool>(N, false));
    deque<pair<pair<int, int>, int>> my_queue;
    int empty_cnt = 0;
    int visit_cnt = 0;

    for(int i = 0; i < M; i++)
    {
        input_line = vector<int>();
        for(int j=0; j < N; j++) 
        {
            cin >> temp;
            if(temp == -1) empty_cnt++;
            input_line.push_back(temp);
        }
        board.push_back(input_line);
    }

    for(int i =0; i < M; i++)
    {
        for(int j =0; j < N; j++)
        {
            if(visited[i][j]) continue;

            if(board[i][j] == 1)
            {
                visited[i][j] = true;
                visit_cnt++;
                my_queue.push_front({{i, j}, 0});
            }
        }
    }


    int cur_x, cur_y, cur_time, new_x, new_y;
    int diffs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    while(!my_queue.empty())
    {
        cur_x = my_queue.back().first.first;
        cur_y = my_queue.back().first.second;
        cur_time = my_queue.back().second;
        my_queue.pop_back();

        for(auto diff: diffs)
        {
            new_x = cur_x + diff[0];
            new_y = cur_y + diff[1];

            if(new_x < 0 || new_y < 0 || new_x >= M || new_y >= N) continue;

            if(visited[new_x][new_y]) continue;

            if(board[new_x][new_y] == -1) continue;

            visited[new_x][new_y] = true;
            visit_cnt++;
            my_queue.push_front({{new_x, new_y}, cur_time + 1});
        }
    }

    if(visit_cnt+empty_cnt != N*M)
    {
        cout << "-1";
    }
    else
    {
        cout << cur_time;
    }
    

	return 0;
}