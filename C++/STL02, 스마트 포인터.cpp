#include <iostream>
#include <memory>
#include <string>
using namespace std;

void unique_foo(string* a)
{
	cout << *a << endl;
}

int main()
{
	cout << "1. unique_ptr<T> 사용" << endl;
	//소유는 하나 함수에 값을 직접 전달하면 안된다. get을 사용.
	auto unique = make_unique<string>(6, '*');
	unique.reset(new string{ "hello" }); //교체
	unique_ptr<string> new_ptr(unique.release()); //소유권 이전
	unique = make_unique<string>(6, '*');
	unique.swap(new_ptr);//상호교환

	unique_foo(unique.get());
	unique_foo(new_ptr.get());

	//암시적 True/False 변환이 가능함.
	if (unique)
		cout << "True" << endl;
	else
		cout << "False" << endl;

	cout << "2. shared_ptr<T> 사용" << endl;
	//다른 shared에 할당도 가능하고, 모든 포인터가 초기화 되거나 소멸되어야한다.

	auto shared = make_shared<int>(4);
	//auto shared2 = shared.get(); 원시포인터를 이용하는건 정의안된 행동이기에 하지 말자.
	auto shared2 = shared;
	cout << shared.use_count() << endl;
	shared2.reset();
	cout << shared.use_count() << endl;
	shared2 = shared;

	if (shared == shared2 && shared != nullptr)
		cout << "같은 객체를 참조하고 있습니다." << endl;
	else
		cout << "다른 객체를 참조하고 있습니다." << endl;

	cout << shared.unique() << endl; //인스턴트가 여러개인지 검사

	cout << "3. weak_ptr<T> 사용" << endl;
	//자유 공간의 객체들의 주소를 클래스 멤버로 저장할 때 사용.

	auto shared3 = make_shared<int>(4);
	weak_ptr<int> weak{ shared3 };

	//weak_ptr은 외부 ptr이 소멸/초기화 될 때 막지 않는다.
	//또한 weak_ptr이 가리키는 객체는 역참조가 불가능하다.

	cout << weak.expired() << endl; // 소멸여부 확인

	shared_ptr<int> shared4{ weak.lock() }; //lock을 써서 shared_ptr을 생성 가능하다.



	system("pause");
}