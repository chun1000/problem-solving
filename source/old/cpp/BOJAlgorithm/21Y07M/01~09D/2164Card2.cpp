#include <iostream>
#include <ios>
#include <deque>

using namespace std;

int main()
{
    int N;
    cin >> N;
    deque<int> my_queue;
    int last_card;

    for(int i = 1; i <= N; i++)
    {
        my_queue.push_back(i);
    }

    while(true)
    {
        last_card = my_queue.front();
        my_queue.pop_front();

        if(my_queue.empty()) break;

        last_card = my_queue.front();
        my_queue.pop_front();
        my_queue.push_back(last_card);
    }

    cout << last_card;

    return 0;
}