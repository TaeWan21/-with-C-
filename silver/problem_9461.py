import sys

input = sys.stdin.readline

# 1 1 1 2 2 3 4 5 7 9 12 16 21 28
pn = [0, 1, 1, 1] + ([0] * 97)

def func(N):
    if pn[N]:
        return pn[N]
    else:
        pn[N] = func(N-2) + func(N-3)
        return pn[N]

T = int(input())    
for _ in range(T):
    N = int(input())
    print(func(N)) 