import sys

N, K = map(int, input().split())

coins = []
ans = 0

for i in range(N):
    coins.append(int(input()))

coins.reverse()

for coin in coins:
    if K >= coin:
        ans += K // coin
        K %= coin    
    if K == 0:
        break

print(ans)