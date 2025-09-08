n = int(input())
for _ in range(n):
    bill = float(input())
    price = bill * 0.8
    print(f"${price:.2f}")