#include <stdio.h>

int main() {
    int n, m, i = 0, a = 0, multi = 1, cont = 0, cont2=0;
    scanf("%d %d", &n, &m);
    i = n + 1;

    while (i < m) {
        cont = 0;
        a = 1;
        
        while (a <= m) {
            if (i % a == 0) {
                cont++;
            }
            cont2=0;
            a++;
        }
        
        if (cont == 2) {
            printf("%d\n", i);
            multi = i + 1;
            while(multi < m){
                if(multi % i == 0){
                    printf("%d ", multi);
                    cont2++;
                }
                multi++;
            }
            if (cont2 == 0){
                printf("*");
            }
            printf("\n");

        }
        i++;
    }

    return 0;
}
