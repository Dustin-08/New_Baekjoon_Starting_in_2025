n = int(input())
for i in range(n):
    s = input()

    middle = len(s) // 2 - 1
    sub = s[middle:middle + 2]
    first = sub[0]
    last = sub[-1]
    if first == last:
        print("Do-it")
    else:
        print("Do-it-Not")