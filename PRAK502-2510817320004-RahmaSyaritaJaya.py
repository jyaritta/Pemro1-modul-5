def hitung(n1, n2):
    return abs(n1 - n2)

a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(hasil)