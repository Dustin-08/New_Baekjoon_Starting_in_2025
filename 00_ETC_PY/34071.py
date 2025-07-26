n = int(input())
v = [int(input()) for _ in range(n)]  # 벡터 입력

if n == 1:
    print("?")
else:
    mn = min(v)
    mx = max(v)
    if v[0] == mn and v[0] == mx:
        print("?")
    elif v[0] == mn:
        print("ez")
    elif v[0] == mx:
        print("hard")
    else:
        print("?")
