def reverse(n):
    rev, remainder = 0, 0
    while n != 0:
        remainder = n % 10
        rev = rev * 10 + remainder
        n = n // 10 
    return rev

A, B = map(int, input().split())
A, B = reverse(A), reverse(B)
C = A + B
print(reverse(C))