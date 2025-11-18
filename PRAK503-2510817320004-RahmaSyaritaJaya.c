#include <stdio.h>
#include <math.h>

int maksimal(int a, int b){
    return fmax(a, b);
}
int minimal(int a, int b){
    return fmin(a, b);
}

int main(){
    int batas = 0, maks = 0, minim = 0;
    int bilangan;
    scanf("%d", &bilangan);
    while(batas < bilangan){
        int nilai;
        scanf("%d", &nilai);
        maks = maksimal(maks, nilai);
        minim = minimal(minim, nilai);
        batas++;
    }
    printf("%d %d", maks, minim);
    return 0;
}