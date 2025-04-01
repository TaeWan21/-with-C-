import sys

input = sys.stdin.readline

N = int(input())

arr = []
ans = 0

for _ in range(N):
    x, y = map(int, input().split())
    arr.append((x,y))

arr.sort(key=lambda x:(x[1], x[0]))

start = 0
end = 0
for i, j in arr:
    if i >= end:
        ans += 1
        end = j

print(ans)                