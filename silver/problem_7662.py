import sys
import heapq

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    min_heap = []
    max_heap = []
    entry_map = {} 
    element_count = 0

    K = int(input())
    for _ in range(K):
        cmd, val = input().split()
        val = int(val)

        if cmd == 'I':
            heapq.heappush(min_heap, val)
            heapq.heappush(max_heap, -val)
            entry_map[val] = entry_map.get(val, 0) + 1
            element_count += 1
        elif cmd == 'D':
            if element_count == 0:
                continue
            
            if val == 1:
                while max_heap:
                    current = -max_heap[0]
                    if entry_map.get(current, 0) > 0:
                        entry_map[current] -= 1
                        if entry_map[current] == 0:
                            del entry_map[current]
                        heapq.heappop(max_heap)
                        element_count -= 1
                        break
                    else:
                        heapq.heappop(max_heap)  
            else:
                while min_heap:
                    current = min_heap[0]
                    if entry_map.get(current, 0) > 0:
                        entry_map[current] -= 1
                        if entry_map[current] == 0:
                            del entry_map[current]
                        heapq.heappop(min_heap)
                        element_count -= 1
                        break
                    else:
                        heapq.heappop(min_heap)  

    while max_heap and entry_map.get(-max_heap[0], 0) == 0:
        heapq.heappop(max_heap)
    while min_heap and entry_map.get(min_heap[0], 0) == 0:
        heapq.heappop(min_heap)

    if element_count == 0:
        print("EMPTY")
    else:
        print(-max_heap[0], min_heap[0])
