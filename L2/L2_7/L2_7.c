#include <stdio.h>

int main(){
    int n, i=1, cont=0;
    scanf("%d", &n);

    while(i<=n){
        if (n%i==0){
            cont++;
        }
        i++;
    }
    if (cont==2){
        printf("Primo");
    }
    else{
        printf("Nao primo");
    }
}