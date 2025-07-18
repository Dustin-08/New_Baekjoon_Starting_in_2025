a, b, c = map(int, input().split())
sum1 = int((a + b) % c)
sum2 = int(((a % c) + (b % c)) % c)
sum3 = int((a * b) % c)
sum4 = int((a % c) * (b % c) % c)

print(sum1, sum2, sum3, sum4, sep="\n")
