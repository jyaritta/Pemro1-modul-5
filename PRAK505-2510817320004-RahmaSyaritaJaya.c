#include <stdio.h>

void Biodata(int a, char *b, char *c){
    int tahun_sekarang = 2025;
    printf("Perkenalkan Nama Saya : %s\n", b);
    printf("Umur Saya : %d\n", tahun_sekarang - a);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", c);
}
int main() {
    int tahun_lahir;
    char A[20], B[15];
    scanf(" %d",&tahun_lahir);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(tahun_lahir, A, B);
    return 0;
}