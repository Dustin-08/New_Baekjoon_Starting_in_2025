n = int(input())

total = 0
for i in range(n + 1):
    total += i
print(total)

powResult = 0
powResult = total ** 2
print(powResult)

total2 = 0
for i in range(n + 1):
    threeResult = i ** 3
    total2 += threeResult
print(total2)
