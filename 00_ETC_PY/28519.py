n, m = map(int, input().split());
absNM = abs(n - m)

if absNM <= 1:
    print(n + m)
else:
    print(2 * min(n, m) + 1)