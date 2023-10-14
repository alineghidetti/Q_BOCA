#include <stdio.h>

int main (){

    int pessoas, itens, u;
    scanf("%d %d", &pessoas, &itens);

    u = itens%pessoas;

    if ( u == 0){
        printf("RESP:%d", pessoas);
    }
    else{
        printf("RESP:%d", u);
    }


    return 0;
}