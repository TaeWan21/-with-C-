import sys

input = sys.stdin.readline

N = int(input())

shirts_reg = list(map(int, input().split()))

T, P = map(int, input().split())

T_cnt = 0

for num in shirts_reg:
    cnt = (num + (T - 1)) // T
    T_cnt += cnt 

print(T_cnt)

total_num = sum(shirts_reg)
print(total_num // P, total_num % P, sep=" ")