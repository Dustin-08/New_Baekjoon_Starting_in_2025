n, m, a, b = map(int, input().split())

if n*3 > m:
    result = 0
    result = n * 3 - m
    result = result * a + b
    print(result)
else:
    print(0)