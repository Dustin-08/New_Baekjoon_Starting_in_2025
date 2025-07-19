# a, b = map(int, input().split())
# print(sum1, sum2, sum3, sum4, sep="\n")

a, b = map(int, input().split())

if (a > b):
    print(">")
elif (a < b):
    print("<")
elif (a == b):
    print("==")
