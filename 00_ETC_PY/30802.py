import math

n = int(input())
s, m, l, xl, xxl, xxxl = map(int, input().split())
t, p = map(int, input().split())

list = [s, m, l, xl, xxl, xxxl]
cnt = 0
for x in list:
    cnt += (x + t - 1) // t  # 올림 나눗셈
print(cnt)

setVal = n // p
holVal = n % p
print(setVal, holVal)
