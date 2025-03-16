import sys

input = sys.stdin.readline

n = int(input())

arr = [0, 1, 3] + ([0]* 998)

# 1 3 5 11 21 43 85 171
def func(n):
    if arr[n]:
        return arr[n]
    else:
        arr[n] = 2 * func(n-2) + func(n-1)
        return arr[n]


print(func(n) % 10007)    