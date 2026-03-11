n, k = map(int, input().split())

a = list(map(int, input().split()))

a.sort(reverse=True)

s = 0

for i in range(k):
    if a[i] > 0:
        s += a[i]

print(s)