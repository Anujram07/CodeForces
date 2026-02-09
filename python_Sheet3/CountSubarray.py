t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    ans = 1 
    cur = 1

    for i in range(1,n):
        if a[i]>=a[i-1]:
            cur+=1
        else:
            cur = 1
        ans+=cur
    print(ans)