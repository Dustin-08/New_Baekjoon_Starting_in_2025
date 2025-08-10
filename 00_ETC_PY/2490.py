for i in range(3):
    x = list(map(int, input().split()))
    cnt0 = cnt1 = 0
    for v in x:
        if v == 0:
            cnt0 += 1
        elif v == 1:
            cnt1 += 1
    if cnt0 == 1 and cnt1 == 3:
        print("A")
    elif cnt0 == 2 and cnt1 == 2:
        print("B")
    elif cnt0 == 3 and cnt1 == 1:
        print("C")
    elif cnt0 == 4:
        print("D")
    elif cnt1 == 4:
        print("E")
