t = int(input())
for i in range(t):
    n, str = input().split()
    newN = int(n) - 1
    newStr = str[:newN] + str[newN + 1:]
    print(newStr)
