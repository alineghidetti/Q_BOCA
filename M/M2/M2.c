#include <stdio.h>

int main(){

    float n;
    scanf("%f", &n);
    printf("INTEIRO:%d,REAL:%.2f", (int)n, n-(int)n);

    return 0;
}