v = []
for i in range(5):
    a = list(map(int, input().split()))
    sumValue = sum(a)
    v.append(sumValue)

maxValue = v[0]
maxIndex = 0
for i in range(5):
    if v[i] > maxValue:
        maxValue = v[i]
        maxIndex = i
print(maxIndex + 1, maxValue)
