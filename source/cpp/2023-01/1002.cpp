//BOJ Silver3 
//if 문 배치 순서 문제로 인해서 여러번 틀렸음. 많은 분기를 다룰 때 서로 겹치는 조건이 있어서 뒤 쪽이 처리를 못하는지 확인해야 함.
//또는 어떤 case가 subcase라는 생각이 들면, 이중 if문으로 처리하는 것도 실수를 줄이는 측면에서 좋을 것이라고 생각 됨.

#include <iostream>
#include <ios>
#include <vector>
#include <cmath>
#include <limits>

using namespace std;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    int x1, x2, y1, y2, r1, r2;
    int ans, T;
    use_boj_io();
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        int rsub = (r1-r2)*(r1-r2);
        int radd = (r1+r2)*(r1+r2);

        if (dist == 0 && rsub == 0)
            ans = -1;
        else if (dist == rsub || dist == radd)
            ans = 1;
        else if (dist > rsub && dist < radd)
            ans = 2;
        else
            ans = 0;

        cout << ans << endl;
    }
    return 0;
}
