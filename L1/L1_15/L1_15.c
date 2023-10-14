#include <stdio.h>

int main(){

    int n, und;
    scanf("%d %d", &n, &und);

    if (und == 1){
        if (n%2 == 0){
            printf("PAR");
        }
        else{
            printf("IMPAR");
        }
    }
    else if (und == 2){
        if((n/10)%2==0){
            printf("PAR");
        }
        else{
            printf("IMPAR");}
        }
    else if (und == 3){
        if((n/100)%2==0){
            printf("PAR");
        }
        else{
            printf("IMPAR");
        }
    }
    

    return 0;
}