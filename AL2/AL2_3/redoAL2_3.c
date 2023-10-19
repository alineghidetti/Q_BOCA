#include <stdio.h>
int main(){
    int n1, n2, max, i=1, mdc;
    scanf("%d %d", &n1, &n2);

    if(n1>n2){
        max=n1;
    }
    else{
        max=n2;
    }

    while(i<max){
        if(n1%i==0 && n2%i==0){
            mdc=i;
        }
        i++;
    }

    printf("%d\n", mdc);

    return 0;
}