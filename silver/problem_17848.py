import sys

input = sys.stdin.readline

N, M = map(int, input().split())

dp = [[[0,0,0] for _ in range(M)]] + [[[float('inf'),float('inf'),float('inf')] for _ in range(M)] for _ in range(N)]

arr = []

ans = float('inf')
for i in range(N):
    arr.append(list(map(int, input().split())))    


for i in range(1,N+1):
    for j in range(M):
    	# 왼쪽 위
        if j < M-1:
            dp[i][j][0] = min(dp[i-1][j+1][1],dp[i-1][j+1][2]) + arr[i-1][j]
        # 오른쪽 위
        if 0 < j:
            dp[i][j][2] = min(dp[i-1][j-1][1],dp[i-1][j-1][0]) + arr[i-1][j]
        # 바로 아래
        dp[i][j][1] = min(dp[i-1][j][0],dp[i-1][j][2]) + arr[i-1][j]


for row in dp[i]:
    for i in row:
        ans = min(ans,i)
print(ans)        