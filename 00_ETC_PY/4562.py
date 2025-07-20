n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    if (x < y):
        print("NO BRAINS")
    else:
        print("MMM BRAINS")
