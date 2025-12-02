# n=int(input())
# for i in range(1,n+1):
#     stars="*"*(i+(i-1))
#     spaces=" "*(n-i)
#     print(f"{spaces}{stars}")
# for i in range(n,0,-1):
#     stars="*"*(i+(i-1))
#     spaces=" "*(n-i)
#     print(f"{spaces}{stars}")

n=int(input())
need=n
for i in range(1,(2*n)+1):
    if(i<n):
        stars="*"*(i+(i-1))
        spaces=" "*(n-i)
        print(f"{spaces}{stars}")
    elif(i==n):
        print("*"*(i+(i-1)))
    else:
        spaces=" "*((i-n)-1)
        stars="*"*(((2*n)-i)+need)
        need=need-1
        print(f"{spaces}{stars}")