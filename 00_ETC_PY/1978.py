n = int(input())
list = list(map(int, input().split()))
cnt = 0

for n in list:
    if n < 2:
        continue
    is_prime = True
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            is_prime = False
            break
    if is_prime:
        cnt += 1

print(cnt)
