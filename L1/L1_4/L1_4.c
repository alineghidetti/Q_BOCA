#include <stdio.h>
#include <math.h>

int main(){

    float r, a, r2;
    const float pi=3.141592;
    scanf("%f", &r);

    a = pi * pow(r,2);

    r2 = sqrt((a/2)/pi);

    printf("%.2f %.2f", a, r2);

    return 0;
}