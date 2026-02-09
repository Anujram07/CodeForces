t = int(input())

for _ in range(t):
    n = int(input())
    A = list(map(int, input().split()))

    result = []

    for i in range(n):
        curr_max = A[i]
        for j in range(i, n):
            curr_max = max(curr_max, A[j])
            result.append(curr_max)

    print(*result)
