# I. ntro

- C++와 관련해서 유용한 문법/알고리즘 관련 문제와 글을 모아둔 길잡이입니다.

- 해당 디렉토리의 코드와 문서들은 출처 명기시 자유 사용이 가능하지만, 코드를 문제 해결 사이트에 그대로 제출하는 부정행위는 삼가주세요.

# A. STL과 자료구조

## A-1. Array/Vector 컨테이너

- [ ] 기본적인 array의 응용. [2312번](./2023-01/2312.cpp)
  
  - fill()/fill_n()을 이용한 초기화.

- [x] 기본적인 vector의 응용 및 초기화. [11060번](./2023-01/11060.cpp)
  
  - assign 함수를 이용한 초기화.
  
  - 배열을 이용한 초기화.
  
  - 다차원 vector의 초기화.
  
  - vector.front()/back() 사용.
  
  - stl의 다른 자료구조를 vector로 변환하기.

## A-2. Bitset/비트마스킹

- [ ] bitset의 간단한 사용.

- [ ] bitset을 사용하지 않은 비트마스킹.

- [ ] bitset을 사용한 비트마스킹.

## A-3. Stack N Queue

- [ ] std::stack의 활용.

- [ ] std::deque의 활용.

- [ ] 전위표기식과 후위표기식.

## A-4. list

- [ ] std::list의 활용.

- [ ] std::foward_list의 활용.

## A-5. 힙과 우선순위 큐.

- [ ] make_heap 사용하기.

- [ ] 기초적인 priority queue의 응용.

- [ ] priority_queue 거꾸로 뒤집기.

- [ ] priority_queue 정렬 커스텀.

## A-6. 트리

- [ ] 연결 리스트 형태의 트리 구현.

- [ ] 배열 형태의 트리 구현.

- [ ] Satisfiability Problem.

- [ ] 이진 트리.

## A-7. 서로소 집합(Disjoint Set)

- [ ] 기초적인 형태의 Union find.

- [ ] Union 최적화(union-by-height).

- [ ] find 최적화(Path Compression).

## A-8. 그래프

- [ ] 배열을 이용한 그래프 구현.

- [ ] 리스트를 이용한 그래프 구현.

- [ ] 프림 알고리즘(Prim's Algorithm).

- [ ] 크루스칼 알고리즘(Kruskal's Algorithm).

- [ ] 다익스트라 알고리즘(Dijkstra's Algorithm). 

- [ ] 솔린 알고리즘(Solin's Algorithm).

- [ ] 벨만-포드 알고리즘(Bellman-Ford's Algorithm).

- [ ] 플로이드 와샬(Floyd Warshall) 알고리즘.

## A-9. 맵과 셋

- [ ] 맵(std::map)의 응용. [10816번](./2023-01/10816.cpp)
  
  - 맵에서 insert/emplace와 pair를 통한 삽입.
  
  - 맵에서 erase의 사용.
  
  - 맵의 원소를 역순으로 정렬하기.

- [ ] std::multi_map 사용.

- [ ] std::unorderd_map 사용.

- [ ] std::set 사용하기.
  
  - std::set에 커스텀 비교함수 사용하기.
  
  - set_intersection()
  
  - set_union()
  
  - set_difference()
  
  - set_include()

# B. 재귀와 반복

## B-1. 동적 프로그래밍(DP)

- [x] 기초적인 DP. [9095번](./2023-01/9095.cpp)

- [ ] 이항 계수(Binomial Coefficient).

- [ ] Chained Matrix Multiplication.

- [ ] Traveling Salesperson Problem.

- [ ] Sequence Alignment. - https://www.acmicpc.net/problem/7346

- [ ] 0-1 Knapsack Problem.

## B-2. 재귀

- [ ] 기초적인 재귀.

- [ ] 하노이 타워.

- [ ] 기초적인 분할정복.

## B-3. 이진 탐색

- [ ] 반복문을 활용한 이진탐색.

- [ ] 재귀를 활용한 이진탐색.

## B-4. 정렬

- [ ] 버블 정렬(Bubble Sort)

- [ ] 선택 정렬(Selection Sort)

- [ ] 삽입 정렬(Insertion Sort)

- [ ] 병합 정렬(Merge Sort)

- [ ] 퀵 정렬(Quick Sort)

- [ ] 힙 정렬(Heap Sort)

- [ ] 기수 정렬(Radix Sort) 

# C. 탐색과 알고리즘

## C-1. 그리디 알고리즘

- [ ] 기초적인 그리디 알고리즘.

- [ ] 허프만 알고리즘(Huffman's Algorithm).

- [ ] Fractinal Knapsack Problem.

## C-2. 퇴각검색(Backtracking)

- [ ] N-Queens problem.

- [ ] 부분집합의 합.

- [ ] 그래프 칠하기.

- [ ] 해밀턴 회로 문제(The Hamiltonian Circuits Problem).

- [ ] 0-1 Knapsack Problem.

- [x] 순열 구하기 [15649번](./2023-02/BOJ-15649.cpp)

## C-3. BFS와 DFS

- [ ] 기본적인 BFS.
  
  - std::set을 visit으로 사용한 기초적인 문제 해결. [2178번](./2023-01/2178.cpp)
  
  - 배열을 visit으로 사용한 기초적인 문제 해결.

- [ ] 스택을 이용한 기본적인 DFS.

- [ ] 재귀를 이용한 기본적인 DFS.

- [ ] A-star Algorithm.

# D. 문자열

## D-1. 복합 알고리즘

- [ ] KMP 알고리즘. 16916번

## D-2. 문자열 기초 조작

- [ ] 문자열 스플릿. 
  
  - [백준 20291번](./2023-02/BOJ-20291.cpp)
  
  - https://www.acmicpc.net/problem/4836

## D-3. 정규 표현식

- [ ] 정규 표현식.

## D-4. 정말 큰 수(Big Integer)

- [ ] 정말 큰 수의 사칙연산.

# E. 산술 및 기하

## E-1. 소수

- [x] 일반 소수 판정. [백준 11653번](./2023-01/11653.cpp), [백준 11653번](./2023-01/11653.cpp)

- [x] 에라토스테네스의 채. 
  
  - [백준 2581번](./2023-01/2581.cpp), [백준 6219번](./2023-02/BOJ-6219.cpp), [백준 10434번](./2023-02/BOJ-10434.cpp)
  - [백준 1418번. 에라토스테네스의 채를 이용한 소인수분해](./2023-02/BOJ-1418.cpp)

## E-2. 공약수와 공배수

- [x] 유클리드 호제법. [백준 12779번](./2023-01/12779.cpp)
- [ ] 공약수

## E-3. 2차원 직교좌표계

- [x] 원의 내접과 외접. [백준 1002번](./2023-01/1002.cpp)

- [ ] 

# F. STL과 알고리즘

## F-1. 정렬

- [ ] sort 함수 사용.
  
  - 내림차순 정렬. [백준25305번](./2023-02/BOJ-25305.cpp)

- [ ] sort 커스터마이징.

- [ ] is_sorted 사용.

- [ ] merge 사용.

## F-2. 검색

- [ ] find() 사용.

- [ ] find_if() 사용.

- [ ] find_if_not() 사용. https://www.acmicpc.net/problem/11140

- [ ] find_first_of() 사용.

- [ ] adjacent_find() 사용.

- [ ] find_end() 사용.

- [ ] search() 사용. https://www.acmicpc.net/problem/11140

- [ ] search_n() 사용.

- [ ] binary_search() 사용.

- [ ] lower_bound() 사용.

- [ ] equal_range() 사용.

## F-3 분리

- [ ] partition_copy 사용.

- [ ] partition_point() 사용.

## F-4. 비교

- [ ] all_of() 사용.

- [ ] any_of() 사용.

- [ ] none_of() 사용.

- [ ] equal() 사용.

- [ ] miss_match() 사용.

## F-5. 복제

- [ ] copy, copy_n() 사용. 

- [ ] copy_if() 사용.

- [ ] copy_backward() 사용.

- [ ] unique_copy() 사용.

- [ ] unique() 사용.

- [ ] rotate()/rotate_copy() 사용.

## F-6. 원소 조작

- [ ] move() 사용.

- [ ] remove()/remove_copy()/remove_if()/remove_copy_if() 사용.

- [ ] replace() 사용.

## F-7. 랜덤

- [ ] 랜덤 숫자 생성.

# G. 그 외 STL과 CPP 기반 문법.

## G-1. 네이밍

- [ ] 네임스페이스의 사용. 

- [ ] typedef와 using.

## G-2. 함수

- [ ] 디폴트 파라미터의 사용.

- [ ] const 함수 사용.

- [ ] static 변수 응용.  

- [ ] 함수 객체 사용.

- [ ] 람다 표현식 사용.

## G-3. 동적 할당과 캐스팅

- [ ] new와 delete의 사용.

- [ ] unique_ptr의 사용.

- [ ] shared_ptr의 사용.

## G-4. 클래스

- [ ] 복사 생성자의 사용.

- [ ] 이동 생성자의 사용.

- [ ] 이동 대입 연산자의 사용.

- [ ] friend 키워드의 사용.

- [ ] 상속의 사용.

- [ ] 연산자 오버로딩 사용. 

## G-5. Template

- [ ] 기초적인 템플릿 사용.
- [ ] 컴파일 시간의 연산.

## G-6. 반복자의 응용.

- [ ] 반복자 읽기/쓰기.

- [ ] 반복자 증가/감소.

- [ ] 반복자 랜덤 액세스.

- [ ] 역방향 반복자(rend/rbegin).

- [ ] advance()

- [ ] distance()

- [ ] next/prev()

## G-8. Map/Reduce/Filter

- [ ] std::transform의 응용.

- [ ] std::copy_if의 응용.

- [ ] std::reduce(CPP17)의 응용.
