import sys

input = sys.stdin.readline

N = int(input())

arr = list(map(int, input().split()))

sorted_arr = sorted(list(set(arr)))

dict_arr = dict(zip(sorted_arr, list(range(len(sorted_arr)))))

for i in arr:
    print(dict_arr[i], end=' ')