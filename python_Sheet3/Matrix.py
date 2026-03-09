N = int(input())

matrix = []

for i in range(N):
    row = list(map(int, input().split()))
    matrix.append(row)


Msum = 0
Ssum = 0 
for i in range(N):
    for j in range(N):
        if i == j:
            Msum += matrix[i][j]
        if i+j == N-1:
            Ssum += matrix[i][j]
        
print(abs(Msum-Ssum))

