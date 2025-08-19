t = int(input())
for i in range(t):
    sumY = 0
    sumK = 0
    for j in range(9):
        y, k = map(int, input().split())
        sumY += y
        sumK += k

    if sumY > sumK:
        print("Yonsei")
    elif sumY < sumK:
        print("Korea")
    elif sumY == sumK:
        print("Draw")
