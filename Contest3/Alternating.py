n = int(input())
a = list(map(int,input().split()))

c1 = 0
c2 = 0

for i in range(n):

    if i % 2 == 0:
        if a[i] < 0:
            c1 += 1
        if a[i] > 0:
            c2 += 1
    else:
        if a[i] > 0:
            c1 += 1
        if a[i] < 0:
            c2 += 1

print(min(c1, c2))