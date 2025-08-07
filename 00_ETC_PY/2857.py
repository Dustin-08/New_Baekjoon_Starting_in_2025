FBI = []

for i in range(5):
    s = input()
    if "FBI" in s:
        FBI.append(i + 1)

if not FBI:
    print("HE GOT AWAY!")
else:
    print(*FBI)
