# k,s=map(int,input().split())
# count=0
# for x in range(0,k+1):
#     for y in range(0,k+1):
#         z=s-(x+y)
#         if(0<=z<=k):
#             print(x,"  ",y,"  ",z)
#             count+=1
# print(count)

k,s=map(int,input().split())
count=0
for x in range(0,k+1):
    remaining=s-x
    r1=min(0,remaining-k)
    r2=max(k,remaining)
    if r1<=r2:
        increase=(r2-r1)+1
        count=count+increase
print(count)