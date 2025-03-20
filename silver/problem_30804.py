# 투포인터
import sys

input = sys.stdin.readline

N = int(input())

arr = list(map(int, input().split()))

ans = 0
end = 0
num_count = {}
class_count = 0

for start in range(N):
    if arr[start] in num_count:
        num_count[arr[start]] += 1
    else:
        class_count += 1
        num_count[arr[start]] = 1
    
    while class_count > 2:
        num_count[arr[end]] -= 1
        
        if num_count[arr[end]] == 0:
            del num_count[arr[end]]
            class_count -= 1
        
        end += 1
    
    ans = max(ans, start - end + 1)

print(ans)        