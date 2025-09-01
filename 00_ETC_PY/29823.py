n = int(input())
str = input()

res = 0
cntE = cntS = cntW = cntN = 0

for i in range(n):
    if str[i] == 'S':
        cntS += 1
    elif str[i] == 'N':
        cntN += 1
    elif str[i] == 'E':
        cntE += 1
    elif str[i] == 'W':
        cntW += 1

res = abs(cntE - cntW) + abs(cntS - cntN)
print(res)