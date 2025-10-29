n = int(input())
s = input()

moeumList = ['a', 'e', 'i', 'o', 'u']
moeumCnt = 0

for char in s:
    if char in moeumList:
        moeumCnt += 1
print(moeumCnt)