n = int(input())
arr = list(map(int, input().split()))



minimum = arr.index(min(arr))
maximum = arr.index(max(arr))

arr[minimum],arr[maximum] = arr[maximum],arr[minimum]

print(*arr)