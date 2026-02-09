n = int(input())
arr = list(map(int, input().split()))

minimum = min(arr)

# print(minimum)

count = 0

for i in range(n):
    if arr[i] == minimum :
        count = count+1

# print(count)
if count%2==0:
    print("Unlucky")
else:
    print("Lucky")



