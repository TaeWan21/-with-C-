import sys

input = sys.stdin.readline

T = int(input())

cases = []

for i in range(T):
    cases.append(int(input()))
    
dp = [0] * 10

for i in range(10):
    if i == 0: # 1
        dp[i] = 1
    elif i == 1: # 1+1, 2
        dp[i] = 2
    elif i == 2: # 1+1+1, 1+2, 2+1, 3
        dp[i] = 4
    else :
        dp[i] = dp[i-3] + dp[i-2] + dp[i-1]

for case in cases:
    print(dp[case-1])