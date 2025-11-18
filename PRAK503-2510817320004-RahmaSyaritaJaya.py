def maksimal(a, b):
    return max(a, b)
def minimal(a, b):
    return min(a, b)

bilangan = int(input())
batas, maks, minim = 1, 0, 0

if bilangan > 0:
    angka_int = list(map(int, input().split()))
    while batas < bilangan:
        maks = maksimal(maks, angka_int[batas])
        minim = minimal(minim, angka_int[batas])
        batas += 1
print(maks, minim)