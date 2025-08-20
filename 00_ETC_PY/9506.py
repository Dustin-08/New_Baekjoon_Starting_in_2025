while (True):
    n = int(input())
    if n == -1:
        break

    a = []
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            a.append(i)
            sum += i
    a.sort()
    if sum == n:
        print(f"{n} =", end=" ")
        print(" + ".join(map(str, a)))
    else:
        print(f"{n} is NOT perfect.")