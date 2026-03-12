n = int(input())

a = list(map(int,input().split()))

i = 0
j = n-1

while(i<=j):
    print(a[i],end=" ")
    i+=1

    if i<=j:
        print(a[j],end=" ")
        j-=1