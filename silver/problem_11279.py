import sys
import heapq

input = sys.stdin.readline

heap = []
N = int(input())

for _ in range(N):
    num = int(input())
    
    if num != 0:
        heapq.heappush(heap, -num)
    else:
        if len(heap) != 0:
            print(-heapq.heappop(heap))
        else:
            print(0)        