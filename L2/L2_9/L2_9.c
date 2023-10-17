#include <stdio.h>

int main() {
    int n, m, i = 0, a = 0, cont = 0, multi = 0, cont2 = 0;

    scanf("%d %d", &n, &m);

    i = 1 + n;
    while (i < m) {
        a = 1;
        while (a <= i) {
            if (i % a == 0) // avaliacao de ser ou nao primo
                cont++;
            cont2 = 0;
            a++;
        }

        if (cont == 2) { // se tiver contador igual a 2 (primo)
            printf("%d\n", i); // imprime o numero
            multi = i + 1;
            while (multi < m) {
                if (multi % i == 0) {
                    printf("%d ", multi);
                    cont2++;
                }
                multi++;
            }
            if (cont2 == 0) {
                printf("*");
            }
            printf("\n");
        }
        cont = 0; // depois de imprimir um número primo, ele zera o contador
        i++;
    }

    return 0;
}
