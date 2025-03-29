import sys
from collections import deque

def bfs(idx):
    global q, visited
    q.append(idx)
    dist = [(-1,0),(1,0),(0,1),(0,-1)]
    visited[idx[0]][idx[1]] = 1
    
    while q:
        x, y = q.popleft()
        
        for i in range(4):
            nx = x + dist[i][0]
            ny = y + dist[i][1]
            
            if 0 <= nx < N and 0 <= ny < N and picture[nx][ny] == picture[x][y] and not visited[nx][ny]:
                visited[nx][ny] = 1
                q.append((nx,ny))
                
input = sys.stdin.readline

N = int(input())
picture = [list(input()) for _ in range(N)]

q = deque()

visited = [[0] * N for _ in range(N)]
cnt1 = 0

for i in range(N):
    for j in range(N):
        if not visited[i][j]:
            bfs((i,j))
            cnt1 += 1

# 색약
for i in range(N):
    for j in range(N):
        if picture[i][j] == 'R':
            picture[i][j] = 'G'

visited = [[0] * N for _ in range(N)]
cnt2 = 0 

for i in range(N):
    for j in range(N):
        if not visited[i][j]:
            bfs((i,j))
            cnt2 += 1                

print(cnt1, cnt2)            