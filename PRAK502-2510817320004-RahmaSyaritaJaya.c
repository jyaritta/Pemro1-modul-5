#include <stdio.h>
#include <math.h>

int hitung(int n1, int n2){
    return abs(n1 - n2);
}

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    int hasil = hitung(a, b) + hitung(c, d);
    printf("%d", hasil);
    return 0;
}