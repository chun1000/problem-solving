#include <numeric>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	cout << "\n\n1. 반복자 사용하기" << endl;

	int data[]{ 1, 2, 3, 4, 5, 6, 7 };

	cout << "원소들\n";
	for (auto iter = begin(data); iter != std::end(data); ++iter)
		cout << *iter << endl;
	auto total = accumulate(begin(data), end(data), 0.0); //accumulate: 범위에 속한 원소들의 합계
	cout << "합계: " << total << endl;










	cout << "\n\n2. istream_iterator 사용하기" << endl;

	cout << "종료하려면 Ctrl+z // 값은 공백으로 구분해서 입력" << endl;
	cout << accumulate(istream_iterator<int>(cin), istream_iterator<int>(), 0.0) << endl;
	//Ctrl+z를 누르는 순간 두 번째 인수로 지정된 끝 스트림 반복자와 일치하게 되서 종료가 됨.









	cout << "\n\n3. 반복자 연산 사용하기" << endl;

	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int>::iterator iter;
	iter = a.begin();
	advance(iter, 3);
	cout << "3칸 증가시키기:" << *iter << endl;
	cout << "현재 반복자에서 끝까지의 거리 구하기: " << distance(iter, a.end()) << endl;
	auto prev_iter = prev(iter, 1);
	auto next_iter = next(iter, 1);
	cout << "지정한 숫자만큼 증가/감소시킨 반복자 얻기//" << "prev: " << *prev_iter << "//next: " << *next_iter << endl;
	system("pause");
}