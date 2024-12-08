#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선

int main() {
    UseFastIO();
    
    int N;
    vector<int> dict(26, 0);

    cin >> N;

    for(int i = 0; i < N; ++i) {
        string str;
        char c;
        cin >> str;
        c = str[0];
        dict[c - 'a'] += 1;
    }

    string ans = "";
    for(size_t i = 0; i < dict.size(); ++i) {
        if(dict[i] >= 5) ans += ('a' + i);
    }

    if(ans == "") std::cout << "PREDAJA" << std::endl;
    else std::cout << ans << std::endl;


    return 0;
}  