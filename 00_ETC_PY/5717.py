active = True
while active:
    m, f = map(int, input().split())
    if m == 0 and f == 0:
        active = False
    else:
        total = 0
        total = m + f
        print(total)
