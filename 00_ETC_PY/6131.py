n = int(input())

ansCnt = 0
for i in range(1, 500):
    for j in range(1, 500):
        if (i * i - j * j == n and j <= i):
            ansCnt += 1
print(ansCnt)