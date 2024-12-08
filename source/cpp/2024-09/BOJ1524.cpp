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

    int T, N, M;
    int temp;
    cin >> T;
    for(int i = 0; i < T; ++i) {

        cin >> N >> M;
        priority_queue<int, vector<int>, greater<int>> sejun_army, sebi_army;

        for(int j = 0; j < N; ++j) {
            cin >> temp;
            sejun_army.push(temp);
        }

        for(int j = 0; j < M; ++j) {
            cin >> temp;
            sebi_army.push(temp);
        }
        
        while(sebi_army.size() > 0 && sejun_army.size() > 0) {
           if(sejun_army.top() < sebi_army.top()) sejun_army.pop();
           else if(sejun_army.top() > sebi_army.top()) sebi_army.pop();
           else if (sejun_army.top() == sebi_army.top()) sebi_army.pop();
        }

        if(sebi_army.size() > 0) std::cout << "B" << std::endl;
        else if (sejun_army.size() > 0) std::cout << "S" << std::endl;
    }

    return 0;
}  