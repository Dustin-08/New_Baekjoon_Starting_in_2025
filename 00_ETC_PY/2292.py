n = int(input())

if n == 1:
    print(1)
else:
    max_room = 1
    layer = 1
    while n > max_room:
        max_room = max_room + 6 * layer
        layer += 1
    print(layer)
