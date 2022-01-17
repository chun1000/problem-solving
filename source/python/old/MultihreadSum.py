#멀티 스레딩에서 파일 변환을 할 때, 스레드 개수에 따라서 서로 책임지는 파일 번호를 구하는 알고리즘의 테스트.

page_num, thread_num = map(int, input().split())

threads = []

for i in range(thread_num-1):
    thread = [i for i in range((page_num//thread_num)*i, (page_num//thread_num)*(i+1))]
    threads.append(thread)
thread = [i for i in range((page_num//thread_num)*(thread_num-1), page_num)]
threads.append(thread)

for thread in threads:
    print(thread)
