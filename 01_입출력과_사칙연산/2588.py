# a, b = map(int, input().split())
# print(sum1, sum2, sum3, sum4, sep="\n")

a = int(input())
b = int(input())

print(a * (b % 10))
print(a * (b % 100 // 10))
print(a * (b // 100))
print(a * b)
