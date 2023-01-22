### BOJ 2609. 최대 공약수와 최소 공배수

---

- 배운점: 유클리드 호제법을 이용해서 LCM과 GCF를 구하는 방식.
  - gcd(a, b) = gcd(b, r),  when r == 0, GCF = b
- 고칠점: - 

### BOJ 2751. 수 정렬하기 2

---

- 배운점
  - C++ 에서 소팅하는 방법: sort(a.begin(), a.end())
  - for-each: for(int num : vec)
- 고칠점: -

### BOJ 9012. 괄호

---

- 배울점: C++에서의 stack 사용법.
- 고칠점: 반복문 돌릴 때는 앞에서 초기화를 제대로 하는지 살펴보기.

### BOJ 10814. 나이 순 정렬

---

- 배운점: 튜플 사용방법

```cpp
#include <tuple>
using namespace std;

int main()
{
	my_vec.push_back({age, i, name});
	cout << get<0>(item) << endl;
}
```

- 고칠점: 튜플을 사용할 때는 꼭 tuple을 include 해야 한다.

### BOJ 10816. 숫자 카드 2

---

- 배운점: unordered_map 사용법
  - unordered_map의 default value는 0이다.
  - 인덱스를 조회하듯이 사용하면 된다.

### BOJ 11050. 이항계수

---

- 배운점: 이항계수 식(nCk = n-1Ck-1 + n-1Ck, if k==0 or k ==n: return 1)

