#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    float soma;
    scanf("%d %d", &x, &y);

    soma = sqrt(x) + sqrt(y);

    printf("%.2f", soma);

    return 0;
}