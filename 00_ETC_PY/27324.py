n = int(input())

tenDigit = n % 10
oneDigit = n // 10

if tenDigit == oneDigit:
    print(1)
else:
    print(0)
