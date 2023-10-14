#include <stdio.h>

int main(){

    int qtd, x, y, termo, i=2;
    scanf("%d", &qtd);

    if(qtd>0){

        if(qtd==1){
            scanf("%d", &x);
            printf("%d", x);
            return 0;
        }
        else{
            scanf("%d %d", &x, &y);
            printf("%d %d", x, y);
            while (i<qtd){
                termo = x+y;
                x=y;
                y=termo;
                i++;
                printf(" %d", termo);

            }
        printf("\n");
        }
}
    return 0;
}