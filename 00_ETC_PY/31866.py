def get_hand_shape(x):
    if x == 0:
        return 0
    if x == 2:
        return 1
    if x == 5:
        return 2
    return 3


def judge(a, b):
    if a == 3 and b == 3:
        return 0
    if a == 3:
        return -1
    if b == 3:
        return 1
    if a == b:
        return 0
    if (a == 0 and b == 1) or (a == 1 and b == 2) or (a == 2 and b == 0):
        return 1
    else:
        return -1


j, i = map(int, input().split())

a = get_hand_shape(j)
b = get_hand_shape(i)

result = judge(a, b)

if result == 1:
    print(">")
elif result == -1:
    print("<")
else:
    print("=")
