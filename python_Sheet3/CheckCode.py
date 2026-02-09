A, B = map(int, input().split())
S = input().strip()

valid = True

# Rule 1: position A+1 must be '-'
if S[A] != '-':
    valid = False

# Rule 2: all other characters must be digits
for i in range(len(S)):
    if i != A and not S[i].isdigit():
        valid = False
        break

print("Yes" if valid else "No")
