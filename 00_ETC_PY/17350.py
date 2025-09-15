n = int(input())
is_Anj = False
for i in range(n):
    s = input()
    if s == "anj":
        is_Anj = True

if is_Anj == True:
    print("뭐야;")
else:
    print("뭐야?")