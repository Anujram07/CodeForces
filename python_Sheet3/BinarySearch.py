n, q = map(int, input().split())
A = set(map(int, input().split()))

for _ in range(q):
    x = int(input())
    print("found" if x in A else "not found")
