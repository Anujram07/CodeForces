n,m = map(int,input().split())
matrix = []
for _ in range (n):
    matrix.append(list(map(int,input().split())))

x  = int(input())

found = False
for i in range(n):
    for j in range(m):
        if matrix[i][j]==x:
            found = True
            break
    if found :
        break

if found:
    print("will not take number")
else:
    print("will take number")
