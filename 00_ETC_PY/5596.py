s = list(map(int, input().split()))
sSum = sum(s)

t = list(map(int, input().split()))
tSum = sum(t)

if sSum == tSum:
    print(sSum)
elif sSum < tSum:
    print(tSum)
elif sSum > tSum:
    print(sSum)
