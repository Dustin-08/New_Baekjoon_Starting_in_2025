# 입력 초과 이슈로 인해 sys.stdin.readline 사용하기
import sys

n = int(sys.stdin.readline())
aWinCnt = 0
bWinCnt = 0
for _ in range(n):
    a, b = map(int, sys.stdin.readline().split())
    if a > b:
        aWinCnt += 1
    elif a < b:
        bWinCnt += 1
print(aWinCnt, bWinCnt)