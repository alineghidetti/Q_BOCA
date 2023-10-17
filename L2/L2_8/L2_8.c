#include <stdio.h>

int ehPrimo(int n) {
    int cont=0;
    int i=1;
    while(i<=n){
        if (n%i==0){
            cont++;
        }
        i++;
    }
    if (cont==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n, m, num, i = 0;
    scanf("%d %d", &n, &m);
    n = n + 1;

    while (n < m) {
        scanf("%d", &num);
        if (ehPrimo(num)) {
            printf("%d ", num); // Adicionei um espaço após cada número primo
        }
        n++; // Atualizei o valor de n para a próxima iteração
    }
    printf("\n"); // Adicionei uma quebra de linha após os números primos

    return 0;
}
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