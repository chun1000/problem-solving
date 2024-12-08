#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    UseFastIO();
    vector<int> input_list;
    
    for(int i = 0; i < 5; ++i) {
        int temp;
        cin >> temp;
        input_list.push_back(temp);
    }

    sort(input_list.begin(), input_list.end());

    int ans = input_list[0];
    
    while(true) {
        int cnt = 0;
        for(const auto& elem : input_list) {
            if(ans % elem == 0) cnt++;
        }

        if(cnt >= 3) {
            cout << ans << endl;
            break;
        }
        ans++;
    }
}  