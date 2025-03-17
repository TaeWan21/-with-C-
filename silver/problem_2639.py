import sys

input = sys.stdin.readline

paper = []

white = 0
blue = 0

N = int(input())

for _ in range(N):
    paper.append(list(map(int, input().split())))

def func(y, x, n):
    global white, blue
    color = paper[y][x]
    for i in range(y, y+n):
        for j in range(x, x+n):
            if color != paper[i][j]:
                div = n // 2
                func(y,x, div) # 2
                func(y, x + div, div) # 1
                func(y + div, x, div) # 3
                func(y + div, x + div, div) # 4
                return
    
    if color == 0:
        white += 1
    else:
        blue += 1

func(0, 0, N)
print(white, '\n', blue, sep='')        