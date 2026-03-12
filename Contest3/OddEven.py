t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    even = 0
    odd = 0

    if n % 2 != 0:
        print(-1)
    else:
        for i in range(n):
            if a[i] % 2 == 0:
                even += 1
            else:
                odd += 1

        if even > odd:
            print((even - odd) // 2)
        elif odd > even:
            print((odd - even) // 2)
        else:
            print(0)