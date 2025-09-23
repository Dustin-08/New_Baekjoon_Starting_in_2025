# 쿼터(Quarter, $0.25)
# 다임(Dime, $0.10)
# 니켈(Nickel, $0.05)
# 페니(Penny, $0.01)
n = int(input())
# qCnt, dCnt, nCnt, pCnt = 0, 0, 0, 0

for _ in range(n):
    change = int(input())
    # change로 나눈 몫 == 사용 갯수
    # 나머지를 다시 change에 저장
    qCnt = change // 25
    change %= 25
    dCnt = change // 10
    change %= 10
    nCnt = change // 5
    change %= 5
    pCnt = change // 1
    change %= 1

    print(qCnt, dCnt, nCnt, pCnt)
