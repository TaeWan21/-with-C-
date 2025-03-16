import sys

input = sys.stdin.readline

n = int(input())

# 1 2 3 5 8 13 21 34 55
arr = [0, 1, 2] + ([0] * 998)
def func(n):
    if arr[n]:
        return arr[n]
    else:
        arr[n] = func(n-1) + func(n-2)
        return arr[n]

print(func(n) % 10007)