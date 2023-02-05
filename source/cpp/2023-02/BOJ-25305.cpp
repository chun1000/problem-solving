#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void use_boj_io()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main()
{
    use_boj_io();
    int N, k; cin >> N >> k;
    vector<int> v(N);
    for(int i = 0; i < N; ++ i) {
        int tmp; cin >> tmp;
        v[i] = tmp;
    }

    //sort(v.begin(), v.end()); 내림차순으로 정렬할 경우
    sort(v.begin(), v.end(), greater<int>()); //오름차순으로 정렬할 경우.
    cout << v[k-1] << endl;
    return 0;
}
