from collections import deque
import copy


def is_transform_possible(word1, word2):
    word1 = list(word1)
    word2 = list(word2)
    
    count = 0
    for i in range(len(word1)):
        if word1[i] != word2[i]:
            count += 1
        
        if count >= 2:
            return False
        
    if count == 0:
        return False
    else:
        return True


def solution(begin, target, words):
    answer = 0
    
    queue = deque()
    visit = [False for _ in range(len(words))]
    queue.append((begin, 0, visit)) #(word, depth)
    
    while queue:
        cur_word, cur_depth, cur_visit = queue.popleft()
        
        if cur_word == target:
            answer = cur_depth
            break
        
        for i in range(len(words)):
            if is_transform_possible(cur_word, words[i]) and not cur_visit[i]:
                new_visit = copy.deepcopy(cur_visit)
                new_visit[i] = True
                queue.append((words[i], cur_depth + 1, new_visit))
    
    return answer