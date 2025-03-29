import sys
from collections import deque

input = sys.stdin.readline

N = int(input())
graph = [list(map(int, input().split())) for _ in range(N)]
visited = [[0] * N for _ in range(N)]

def bfs(x):
    queue = deque()
    queue.append(x)
    check = [0 for _ in range(N)]
    
    while queue:
        val = queue.popleft()
        
        for i in range(N):
            if check[i] == 0 and graph[val][i] == 1:
                queue.append(i)
                check[i] = 1
                visited[x][i] = 1

for i in range(N):
    bfs(i)

for i in visited:
    print(*i)