n = int(input())
arr = list(map(int, input().split()))

print("YES" if arr == arr[::-1] else "NO")