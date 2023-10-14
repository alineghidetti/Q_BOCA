#include <stdio.h>

int main(){

    //calculadora de mdc

    int a, b, max, i=1, mdc;
    scanf("%d %d", &a, &b);

    if (a>b){
        max=a;
    }

    else{
        max=b;
    }

    while(i<max){
        if (a%i==0 && b%i==0){
            mdc=i;
        }
        i++;
    }

    printf("%d", mdc);

    return 0;
}