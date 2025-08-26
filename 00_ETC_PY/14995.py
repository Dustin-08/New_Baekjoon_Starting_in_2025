n = int(input())


def fibonacci(n):
    if (n <= 3):
        return 1
    f1 = 1
    f2 = 1
    f3 = 1
    result = 1

    for i in range(4, n + 1):
        result = f1 + f3
        f1 = f2
        f2 = f3
        f3 = result
    return result


print(fibonacci(n))