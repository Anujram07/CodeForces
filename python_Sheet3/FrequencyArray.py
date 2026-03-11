N, M = map(int, input().split())

A = list(map(int, input().split()))

count = [0]*(M+1)

for x in A:
    count[x] += 1

for i in range(1,M+1):
    print(count[i])
    

