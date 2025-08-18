a = int(input())
b = int(input())
c = int(input())

product = a * b * c
cnt = [0] * 10

for i in str(product):
    cnt[int(i)] += 1

for i in cnt:
    print(i)
