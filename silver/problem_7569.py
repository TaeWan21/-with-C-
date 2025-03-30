import sys
from collections import deque

def bfs():
    while q:
        x,y,z = q.popleft()
        dx = [-1, 1, 0, 0, 0, 0]
        dy = [0, 0, -1, 1, 0, 0]
        dz = [0, 0, 0, 0, -1, 1]
        
        for i in range(6):
            nx = x + dx[i]
            ny = y + dy[i]
            nz = z + dz[i]
            
            if 0 <= nx < H and 0 <= ny < N and 0 <= nz < M and graph[nx][ny][nz] == 0  and not visited[nx][ny][nz]:
                q.append((nx, ny, nz))
                graph[nx][ny][nz] = graph[x][y][z] + 1
                visited[nx][ny][nz] = True
            
input = sys.stdin.readline
M, N, H = map(int, input().split())

graph =[[list(map(int, input().split())) for _ in range(N)] for _ in range(H)]

visited = [[[False] * M for _ in range(N)] for _ in range(H)]
q = deque()

for i in range(H):
    for j in range(N):
        for k in range(M):
            if graph[i][j][k] == 1 and not visited[i][j][k]:
                q.append((i,j,k))
                visited[i][j][k] = True

bfs()                


ans = 0

for i in graph:
    for j in i:
        for k in j:
            if k == 0:
                print(-1)
                exit(0)
        ans = max(ans, max(j))

print(ans - 1)                    