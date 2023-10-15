#include <stdio.h>
int main(){
    int n;
    while (1){
        scanf("%d", &n);

        if(!(n<=100 && !(n>=-100))){
            break;
        }
    }
    return 0;
}