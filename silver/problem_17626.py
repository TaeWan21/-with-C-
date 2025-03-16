import sys

input = sys.stdin.readline

n = int(input())
cnt = 0

dp = [0] * (n+1)

x = 1

while x**2 <= n:
    dp[x**2] = 1
    x +=1
    
for i in range(1, n+1):
    if dp[i] != 0:
        continue
    j = 1
    while j**2 <= i:
        if dp[i] == 0:
            dp[i] = dp[j*j]+ dp[i-j**2]
        else:
            dp[i] = min(dp[i], dp[j**2] + dp[i-j**2])
        j += 1

print(dp[n])