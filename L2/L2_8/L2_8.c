#include <stdio.h>

int main(){
    int n, m, i, cont;

    scanf("%d %d", &n, &m);
    n=n+1;

    printf("RESP:");

    while(n<m){
        cont=0;
        i=1;

        while(i<m){
            if(n%i==0){
                cont++;
            }
            i++;
        }
        if (cont == 2){
            printf("%d ", n);
        }
        n++;

                    int hasMultiples = 0;
            for (int j = i; j < m; j += i) {
                printf("%d ", j);
                hasMultiples = 1;
            }
    }

    return 0;
}