#include <stdio.h>
int main(){
    int qtd, x, y, i=2, aux;
    scanf("%d", &qtd);
    if(qtd>0){
        scanf("%d %d", &x, &y);
        if(qtd==1){
            printf("%d", x);
        }
        else{
            printf("%d %d ", x, y);
            while(i<qtd){
                aux = x + y;
                x = y;
                y = aux;
                printf("%d ", aux);
                i++;
            }
        }
    }
    else{
        return 0;
    }
        
}