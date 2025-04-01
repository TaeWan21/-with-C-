import sys
import ast
from collections import deque

input = sys.stdin.readline

T = int(input().strip())

for _ in range(T):
    command = input().strip()
    length = int(input().strip())
    s = input().strip()

    
    if s == "[]":
        arr = deque()
    else:
        arr = deque(map(int, s[1:-1].split(',')))

    reverse_flag = False
    error_flag = False

    for c in command:
        if c == "R":
            reverse_flag = not reverse_flag
        elif c == "D":
            if not arr:
                print("error")
                error_flag = True
                break
            if reverse_flag:
                arr.pop()
            else:
                arr.popleft()

    if not error_flag:
        if reverse_flag:
            arr.reverse()
        print(f"[{','.join(map(str, arr))}]")
            
    