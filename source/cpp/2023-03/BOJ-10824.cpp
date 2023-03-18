#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <cstdlib>
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
    char* t;
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    long long AB = std::strtoll((std::to_string(A) + std::to_string(B)).c_str(), &t, 0);
    long long CD = std::strtoll((std::to_string(C) + std::to_string(D)).c_str(), &t, 0);
    cout << AB + CD << endl;
    return 0;
}