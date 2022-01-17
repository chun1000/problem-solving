### BOJ 1620. Pocketmon

---

- 배운점: 스트링을 숫자로 바꾸는 C++ 함수: stoi(string), 문자가 나올때까지의 숫자를 변환시켜준다.

### BOJ 1697. HideNSeek

---

- 배운점: unordered_set 사용법. s.find(a) != s.end() then continue;

### BOJ 1927. MinHeap

---

- Min_heap 만드는 법

```cpp
priority_queue<int, vector<int>, greater<int>> my_queue;
my_queue.top();
my_queue.pop();
my_queue.push(item);
```

### BOJ 7576. Tomato

---

- unordered_set 계열은 pair와 함께 쓸 수 없다.(pair를 해쉬화 할 수 없기 때문)

### BOJ 2581. PrimeNum

----

- 소수를 찾을 때는 sqrt() 이하의 값까지만 찾으면 된다.
- accumulate(numeric 헤더), min_element(algorithm 헤더) 쓰는 방법.
- 항상 경계값 조심.