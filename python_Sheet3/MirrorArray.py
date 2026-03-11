N, M = map(int, input().split())

for i in range(N):
    row = list(map(int, input().split()))
    
    for j in range(M-1, -1, -1):
        print(row[j], end=" ")

    print()
    
