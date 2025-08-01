n, k = map(int, input().split())
a = []  # python에서는 vector 대신 list 사용
for i in range(1, n + 1):
    if n % i == 0:
        a.append(i)

if len(a) >= k:
    print(a[k - 1])
else:
    print(0)
