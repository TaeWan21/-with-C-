import sys

input = sys.stdin.readline

N, M = map(int, input().split())

arr = list(map(int, input().split()))

sum_arr = [0]
x = 0

for i in arr:
    x = x + i
    sum_arr.append(x)
    
for _ in range(M):
    start, end = map(int, input().split())    
    print(sum_arr[end] - sum_arr[start-1])    