#include <stdio.h>

int ehPrimo(int i){
    int j=1, cont=0;
    while(j<=i){
        if(i%j==0){
            cont++;
        }
        j++;
    }
    if (cont==2){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){
    int n, m, i;
    scanf("%d %d", &n, &m);

    i = n + 1;

    while(i<m){
        if(ehPrimo(i)==1){
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}