# 양 한마리가 하루에 a그램 사료 먹음
# 염소 한마리가 하루에 b그램 사료 먹음
# 양 + 염소 = n
# 하루동안 소비한 전체 사료의 양 = w그램
a, b, n, w = map(int, input().split())

lambAns = 0
goatAns = 0
ansCnt = 0

for lamb in range(1, n):
    goat = n - lamb
    if lamb * a + goat * b == w:
        ansCnt += 1
        lambAns = lamb
        goatAns = goat
if ansCnt == 1:
    print(f"{lambAns} {goatAns}")
else:
    print("-1")