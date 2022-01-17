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

    int vertex_num, edge_num;
    int a, b;
    cin >> vertex_num >> edge_num;

    vector<vector<int>> adjacency_list(vertex_num+1, vector<int>());
    unordered_set<int> visited;
    deque<pair<int, int>> my_queue;

    for(int i = 0; i < edge_num; i++)
    {
        cin >> a >> b;

        adjacency_list[a].push_back(b);
        adjacency_list[b].push_back(a);
    }

    visited.insert(1);
    my_queue.push_front({1, 0});

    int cur_step, cur_node, next_node;
    while(!my_queue.empty())
    {
        cur_node = my_queue.back().first;
        cur_step = my_queue.back().second;
        my_queue.pop_back();

        for(auto item : adjacency_list[cur_node])
        {
            next_node = item;
            if(visited.find(next_node) != visited.end()) continue;

            visited.insert(next_node);
            my_queue.push_front({next_node, cur_step + 1});
        }
    }

    cout << visited.size()-1;

	return 0;
}