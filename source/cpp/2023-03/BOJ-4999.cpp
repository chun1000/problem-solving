#include <iostream>
#include <ios>
#include <vector>
#include <string>

using namespace std;

void UseFastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// 백준 전용 입출력 속도 개선


int main() {
    UseFastIO();
    string hawn, doc;
    cin >> hawn >> doc;

    if(hawn.length() < doc.length()) cout << "no";
    else cout << "go";
    
    cout << endl;
    return 0;
}