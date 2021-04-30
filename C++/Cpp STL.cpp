#include <numeric>
#include <iostream>
#include <iterator>

using namespace std;

int main()
{
	//반복자 사용하기

	int data[]{ 1, 2, 3, 4, 5, 6, 7 };
	
	cout << "원소들\n";
	for (auto iter = begin(data); iter != std::end(data); ++iter)
		cout << *iter << endl;
	auto total = accumulate(begin(data), end(data), 0.0);
	cout << "합계: " << total << std::endl;

	system("pause");

}