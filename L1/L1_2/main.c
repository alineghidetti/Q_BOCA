#include <stdio.h>
int main(){
    float a, l, perimetro;
    scanf("%f %f", &a, &l);
    perimetro = 2*l + 2*a;
    printf("%.2f", perimetro);

    return 0;
}