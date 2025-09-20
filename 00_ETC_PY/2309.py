a = [int(input()) for _ in range(9)]  # 리스트 줄마다 입력
a.sort()  # 정렬
total = sum(a)

for i in range(9):
    for j in range(i + 1, 9):
        if a[i] + a[j] == total - 100:
            for k in range(9):
                if k != i and k != j:
                    print(a[k])
            exit()