def biodata(a, b, c):
    tahun_sekarang = 2025
    print(f"Perkenalkan Nama Saya : {b}")
    print(f"Umur Saya : {tahun_sekarang - a}")
    print(f"Saya Adalah Angkatan : {tahun_sekarang}")
    print(f"Asal Saya dari : {c}")


tahun_lahir = int(input())
nama = input()
asal = input()
biodata(tahun_lahir, nama, asal)