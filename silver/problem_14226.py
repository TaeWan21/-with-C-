import sys
from collections import deque

def bfs(s):
    while q:
        now, cb = q.popleft()
        
        if now == s:
            print(visited[(now, cb)])
            break
        
        # 클립보드 복사
        if (now, now) not in visited.keys():
            visited[(now, now)] = visited[(now, cb)] + 1
            q.append((now, now))
        
        # 화면에 붙여넣기
        if (now + cb, cb) not in visited.keys():
            visited[(now + cb, cb)] = visited[(now, cb)] + 1
            q.append((now + cb, cb))
            
        # 화면에서 삭제
        if (now - 1, cb) not in visited.keys():
            visited[(now - 1, cb)] = visited[(now, cb)] + 1
            q.append((now - 1, cb))
            
input = sys.stdin.readline

s = int(input())

visited = dict()
q = deque()

q.append((1,0))
visited[(1,0)] = 0

bfs(s)