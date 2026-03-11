T = int(input())

for i in range(T):
    w,h = map(int, input().split())

    if w==h:
        print("Square")
    else:
        print("Rectangle")