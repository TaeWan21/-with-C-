import sys

input = sys.stdin.readline

T = int(input())

def func(M, N, x, y):
    while x <= M * N - 1:
        if (x-y) % N == 0:
            return x
        x += M
    return -1
                    
for i in range(T):
    M, N, x, y = map(int, input().split())
    print(func(M,N,x,y))
    