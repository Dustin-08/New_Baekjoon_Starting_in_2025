str = input()
length = len(str)
cnt = 0
for i in range(length):
    if str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u':
        cnt += 1
print(cnt)
