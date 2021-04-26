#include <iostream>
#include <string>

/*----------------------------------------
매개 변수의 디폴트 값.
------------------------------------------*/

int parameterDefault(int num = 7) {
	std::cout << "default is: " << std::endl;
	//매개 변수의 디폴트 값.
	//function(int num1, int num2 =10)....(O)
	//function(int num1=10, int num2) ....(X)
	return 0;
}

/*----------------------------------------
인라인 함수
------------------------------------------*/

inline int inlineFunction()
{
	//간단한 함수를 만들 때, 실행 속도의 이점을 얻을 수 있음.
}

/*----------------------------------------
네임 스페이스의 활용
------------------------------------------*/

namespace p 
{
	namespace k 
	{
		int function() 
		{
			//함수를 부를 때 p::k::function();
			return 0;
		}
	}
}

using p::k::function;
//함수를 부를 때 네임스페이스를 생략.

namespace a = p::k;
//네임 스페이스가 너무 길 때 사용.


/*----------------------------------------
New와 Delete
------------------------------------------*/

void new_and_delete()
{
	int *arr = new int[3];
	delete[] arr;
}

/*----------------------------------------
복사 생성자
생성자의 Default는 얕은 복사이기 떄문에
직접 깊은 복사를 하는 복사생성자를 만들어주어야한다.
------------------------------------------*/

class CopyConstructor
{
private:
	int a;
	int* b;
	int* c;
public:
	CopyConstructor(const CopyConstructor &copy) {
		a = copy.a;
		b = new int;
		*b = *copy.b;
		c = new int;
		memcpy(c, copy.c, sizeof(int));
	}
};

class FriendB
{
private:
};

class FriendA
{
private:
	std::string name;

	friend class FriendB;

};

