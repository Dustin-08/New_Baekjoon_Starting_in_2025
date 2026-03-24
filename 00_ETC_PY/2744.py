str = input()
string = ""

for i in range(0, len(str)):
    if str[i].islower():
        string += str[i].upper()
    elif str[i].isupper():
        string += str[i].lower()

print(string)