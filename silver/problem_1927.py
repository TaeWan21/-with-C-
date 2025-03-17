import sys
import heapq

input = sys.stdin.readline

N = int(input())

heap = []

for i in range(N):
    num = int(input())
    
    if num != 0:
        heapq.heappush(heap, num)
    
    else:
        if len(heap) == 0:
            print(0)
        else:
            print(heapq.heappop(heap))    