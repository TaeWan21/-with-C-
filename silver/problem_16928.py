import sys
from collections import deque

input = sys.stdin.readline

N,M = map(int, input().split())

ladder = dict()
snack = dict()

board = [0] * 101
visited = [0] * 101
q = deque()

for _ in range(N):
     x,y = map(int, input().split())
     ladder[x] = y

for _ in range(M):
     u,v = map(int, input().split())
     snack[u] = v


def bfs():
    while q:
        now = q.popleft()
        
        for i in range(1, 7):
            next = now + i
            if 0 < next <= 100 and not visited[next]:
                if next in ladder:
                    next = ladder[next]
                
                if next in snack:
                    next = snack[next]
                
                if not visited[next]:
                    q.append(next)
                    visited[next] = True
                    board[next] = board[now] + 1

q.append(1)
bfs()

print(board[100])                    