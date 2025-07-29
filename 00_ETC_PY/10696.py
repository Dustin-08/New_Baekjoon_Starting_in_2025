t = int(input())

for i in range(t):
    n, x = input().split()
    x = int(x)  # int형
    rem = 0
    for c in n:
        rem = (rem * 10 + int(c)) % x
    print(f"Case {i + 1}: {rem}")
