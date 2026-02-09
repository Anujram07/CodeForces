n = int(input())
arr = list(map(int, input().split()))

ans = 100
for x in arr:
    count = 0
    while x % 2 == 0:
        x //= 2
        count += 1
    ans = min(ans, count)

print(ans)