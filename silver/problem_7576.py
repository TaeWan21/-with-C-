import sys
from collections import deque

def bfs():
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    while q:
        x, y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            
            if 0 <= nx < N and 0 <= ny < M and graph[nx][ny] == 0 and not visited[nx][ny]:
                q.append((nx, ny))
                visited[nx][ny] = True
                graph[nx][ny] = graph[x][y] + 1
                
input = sys.stdin.readline

M, N = map(int, input().split())

graph = [list(map(int, input().split())) for _ in range(N)]
visited = [[False] * M for _ in range(N)]
q = deque()

for i in range(N):
    for j in range(M):
        if graph[i][j] == 1 and not visited[i][j]:
            q.append((i,j))
            visited[i][j] = True

bfs()            

ans = 0

for i in graph:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    ans = max(ans, max(i))

print(ans - 1)    