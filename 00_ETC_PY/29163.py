n = int(input())
v = list(map(int, input().split()))

holCnt = 0
jjakCnt = 0

for i in range(n):
    if v[i] % 2 == 0:
        jjakCnt += 1
    else:
        holCnt += 1

if jjakCnt > holCnt:
    print("Happy")
else:
    print("Sad")
