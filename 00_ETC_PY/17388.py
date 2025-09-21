s, k, h = map(int, input().split())

total = 0
total = sum([s, k, h])

if total >= 100:
    print("OK")
else:
    minVal = min(s, k, h)
    if minVal == s:
        print("Soongsil")
    elif minVal == k:
        print("Korea")
    elif minVal == h:
        print("Hanyang")