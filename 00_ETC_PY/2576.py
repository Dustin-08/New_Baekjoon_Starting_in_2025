v = [int(input()) for _ in range(7)]  # 벡터 줄마다 입력

holCnt = 0
minValue = 100
total = 0
for i in range(7):
    if v[i] % 2 == 1:
        total += v[i]
        holCnt += 1
        if v[i] < minValue:
            minValue = v[i]
if holCnt == 0:
    print(-1)
else:
    print(total)
    print(minValue)
