//stoi, stof, stol, stod 등 사용방법 체득. 브론즈

#include <iostream>
#include <sstream>
#include <ios>
#include <string>
#include <vector>

using namespace std;

void use_boj_io() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
//백준 전용 입출력 속도 개선

int main()
{
	use_boj_io();
	string hex;
	int num;

	cin >> hex;

	num = stoi(hex, NULL, 16);

	cout << num;


	return 0;
}

