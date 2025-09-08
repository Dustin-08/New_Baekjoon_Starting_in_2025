e, f, c = map(int, input().split())
bottles = e + f
result = 0
while bottles >= c:
    newCola = bottles // c
    result += newCola
    bottles = bottles % c + newCola
print(result)
