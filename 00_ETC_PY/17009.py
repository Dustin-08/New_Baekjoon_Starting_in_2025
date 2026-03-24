sumA = 0
sumB = 0

for i in range(3, 0, -1):
    s = int(input())
    sumA += s * i

for i in range(3, 0, -1):
    s = int(input())
    sumB += s * i

if sumA > sumB:
    print("A")
elif sumA < sumB:
    print("B")
else:
    print("T")