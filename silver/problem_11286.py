import sys
import heapq

input = sys.stdin.readline

N = int(input())

heap_abs = []

for _ in range(N):
    val = int(input())
    
    if val != 0:
        heapq.heappush(heap_abs, (abs(val), val))
    else:
        if len(heap_abs) != 0:
            print(heapq.heappop(heap_abs)[1])    
        else:
            print(0)    