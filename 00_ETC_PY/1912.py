n = int(input())
v = list(map(int, input().split()))

dp = [0] * n

dp[0] = v[0]
maxSum = dp[0]

for i in range(1, n):
    dp[i] = max(v[i], dp[i - 1] + v[i])
    maxSum = max(maxSum, dp[i])

print(maxSum)
