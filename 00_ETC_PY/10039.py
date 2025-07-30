sum = 0
for i in range(5):
    n = int(input())
    if (n < 40):
        sum = sum + 40
    else:
        sum = sum + n
print(sum // 5)  # /는 실수형 답이, //는 정수형 나눗셈
