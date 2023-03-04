#include <iostream>
#include <string>
#include <ios>
#include <vector>
#include <map>

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
    use_boj_io();

    double weight, height;
    cin >> weight >> height;

    double BMI = weight/(height*height);
    if(BMI > 25) {
        cout << "Overweight\n";
    }
    else if(BMI < 18.5) {
        cout << "Underweight\n";
    }
    else {
        cout <<"Normal weight\n";
    }

    return 0;
}
