import sys

sys.setrecursionlimit(10**7)
input = sys.stdin.readline

N, M = map(int, input().split())

graph = list(input() for _ in range(N))
is_visited = [[False] * M for _ in range(N)]

dx = [-1,1,0,0]
dy = [0,0,-1,1]


def dfs(x, y):
        global cnt
        is_visited[x][y] = True
        
        if graph[x][y] == 'P':
            cnt += 1
        
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < N and 0 <= ny < M and not is_visited[nx][ny] and graph[nx][ny] != 'X':
                dfs(nx, ny)
                 
cnt = 0
            
for i in range(N):
    for j in range(M):
        if graph[i][j] == 'I':
            dfs(i,j)

if cnt == 0 :
    print('TT')
else:
    print(cnt)                