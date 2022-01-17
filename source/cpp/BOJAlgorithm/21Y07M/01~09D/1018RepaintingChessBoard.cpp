#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cnt_line(string line, bool is_black)
{
    string standard_white = "WBWBWBWB";
    string standard_black = "BWBWBWBW";
    int cnt = 0;
    for(int i = 0; i < 8; i++)
    {
        if(!is_black &&(line[i] != standard_white[i])) cnt++;
        if(is_black &&(line[i] != standard_black[i])) cnt++;
    }

    return cnt;
}

int cnt_board(int start_pos_x, int start_pos_y, vector<string> const& board)
{
    int white_cnt = 0;
    int black_cnt = 0;
    string sub_string;

    for(int i = start_pos_y; i < start_pos_y + 8; i++)
    {
        sub_string = board[i].substr(start_pos_x, 8); 
        white_cnt += cnt_line(sub_string, ((i-start_pos_y)%2==0)? false: true);
        black_cnt += cnt_line(sub_string, ((i-start_pos_y)%2==0)? true : false);
    }

    return min(white_cnt, black_cnt);
}

int main()
{
    int N, M;
    vector <string> board;
    string tmp;

    cin >> N >> M;
    int max_horzn = M - 8;
    int max_vert = N -8;
    int min_cnt = 100;

    for(int i = 0; i < N; i++)
    {
        cin >> tmp;
        board.push_back(tmp);
    }

    for(int x = 0; x <= max_horzn; x++)
    {
        for(int y = 0; y <= max_vert; y++)
        {
            min_cnt = min(min_cnt, cnt_board(x, y, board));
        }
    }

    cout << min_cnt;

    return 0;
}