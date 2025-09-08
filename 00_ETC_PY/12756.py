playerAAtkPnt, playerALife = map(int, input().split())
playerBAtkPnt, playerBLife = map(int, input().split())

while True:
    playerALife -= playerBAtkPnt
    playerBLife -= playerAAtkPnt
    if playerALife <= 0 or playerBLife <= 0:
        break
if playerALife > 0 and playerBLife <= 0:
    print("PLAYER A")
elif playerALife <= 0 and playerBLife > 0:
    print("PLAYER B")
else:
    print("DRAW")