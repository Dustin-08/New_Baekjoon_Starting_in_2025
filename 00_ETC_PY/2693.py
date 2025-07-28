t = int(input())

for i in range(t):
    v = list(map(int, input().split()))
    v.sort()
    print(v[7])
