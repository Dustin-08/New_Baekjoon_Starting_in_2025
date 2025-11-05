n, k = map(int, input().split())

v = list(map(int, input().split()))

total = 0
for i in range(k):
    total += v[i]

max = total
for i in range(k, n):
    total += v[i] - v[i - k]
    if total > max:
        max = total
print(max)