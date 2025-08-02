n = int(input())
fruits = {}

for _ in range(n):
    name, x = input().split()
    x = int(x)
    if name in fruits:
        fruits[name] += x
    else:
        fruits[name] = x

for count in fruits.values():
    if count == 5:
        print("YES")
        break
else:
    print("NO")