n = int(input())

words = [str(input()) for i in range(n)]
words = list(set(words))  # 중복 제거
words.sort()  # 사전순 정리
words.sort(key=len)  # 길이 짧은 순

for i in words:
    print(i)
