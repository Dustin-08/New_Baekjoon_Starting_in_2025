n = int(input())
cuteCnt = 0
cuteNotCnt = 0
for i in range(n):
    cute = int(input())
    if cute == 1:
        cuteCnt += 1
    elif cute == 0:
        cuteNotCnt += 1
if cuteCnt > cuteNotCnt:
    print("Junhee is cute!")
elif cuteCnt < cuteNotCnt:
    print("Junhee is not cute!")