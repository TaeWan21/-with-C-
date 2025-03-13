N = int(input())
ans = 0

times = list(map(int, input().split()))
    
times.sort()

for i in range(N):
    ans += times[i]
    for j in range(i):
        ans += times[j]

print(ans)