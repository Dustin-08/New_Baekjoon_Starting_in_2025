n = int(input())
v = [list(map(int, input().split())) for _ in range(n)]  # 배열 입력 받기

v.sort(key=lambda x: (x[1], x[0]))

for point in v:
    print(point[0], point[1])
