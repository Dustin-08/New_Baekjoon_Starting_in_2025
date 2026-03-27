a, t = map(int, input().split())
p = 10 + 2 * (25 - a + t)

if p >= 0:
    print(p)
else:
    print(0)