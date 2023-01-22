#include <iostream>
#include <ios>
#include <string>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    //ios::sync_with_stdio(false);

    int T, H, W, N;
    int x, y;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        cin >> H >> W >> N;

        x = (N-1)/H+1;
        y = (N-1) % H + 1;

        printf("%d%02d\n", y, x);
    }

    return 0;
}