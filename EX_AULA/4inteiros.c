#include <stdio.h>

int main(){

    //retornar escritos em ordem crescente
    int n1, n2, n3, n4, aux;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1>n2){
        aux=n1;
        n1=n2;
        n2=aux;
    }
    if (n3>n4){
        aux=n3;
        n3=n4;
        n4=aux;
    }
    if (n1>n3){
        aux=n1;
        n1=n3;
        n3=aux;
    }
    if (n2>n4){
        aux=n2;
        n2=n4;
        n4=aux;
    }
    if (n2>n3){
        aux=n2;
        n2=n3;
        n3=aux;
    }
    if (n1>n4){
        aux=n1;
        n4=n1;
        n1=aux;
    }

    printf ("%d %d %d %d", n1, n2, n3, n4);

    return 0;
}