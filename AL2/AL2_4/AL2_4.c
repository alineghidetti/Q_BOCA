#include <stdio.h>

int main(){

    int n,digito=0, original, reverso=0, i=0;
    scanf("%d", &n);

    original = n;

    while(n>0){
        digito = n%10;
        reverso = reverso*10 + digito;
        n = n/10;
    }

    if (original==reverso){
        printf("SIM");
    }
    else{
        printf("NAO");
    }

    return 0;
}