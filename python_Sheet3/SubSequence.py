N, M = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

j = 0
i=0

for i in range(N):
    if j < M and A[i] == B[j]:
        j += 1

if j == M:
    print("YES")
else:
    print("NO")