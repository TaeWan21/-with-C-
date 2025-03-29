import sys
from collections import deque

def bfs(idx):
    global q, visited
    dir = [(-1,0),(1,0),(0,-1),(0,1)]
    q.append(idx)
    
    while q:
        x, y = q.popleft()
        for dx, dy in dir:
            nx = x + dx
            ny = y + dy
            
            if 0 <= nx < n and 0 <= ny < m and graph[nx][ny] == 1 and not visited[nx][ny]:
                q.append((nx,ny))
                visited[nx][ny] = True
                ans[nx][ny] = ans[x][y] + 1
        
input = sys.stdin.readline
n, m = map(int, input().split())

graph = [list(map(int, input().split())) for _ in range(n)]
visited = [[False]*m for _ in range(n)]
ans = [[0]*m for _ in range(n)]

for i in range(n):
    for j in range(m):
        if graph[i][j] == 2:
            visited[i][j] = True
            start = (i, j)

q = deque()
bfs(start)

for i in range(n):
    for j in range(m):
        if not visited[i][j] and graph[i][j]:
            print(-1, end=" ")
        else:
            print(ans[i][j], end = " ")    
    print()        