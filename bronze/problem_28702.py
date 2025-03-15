import sys

input = sys.stdin.readline

x = 0

for i in range(3, 0, -1):
    s = input().strip()
    
    if s not in ['FizzBuzz', 'Fizz', 'Buzz']:
        x = int(s) + i
        break

if x % 3 == 0 and x % 5 == 0:
    print('FizzBuzz')
elif x % 3 == 0:
    print('Fizz')
elif x % 5 == 0:
    print('Buzz')
else :
    print(x)    