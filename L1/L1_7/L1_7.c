#include <stdio.h>

int main(){

    float t, convertido;
    char un;

    scanf("%f %c", &t, &un);

    if ((un) == 'f' || (un) == 'F'){
        convertido = ((t-32)/9)*5;
        printf("%.2f (C)", convertido);}
    else if ((un) == 'c' || (un) == 'C'){
        convertido = ((9*t)/5)+32; 
        printf("%.2f (F)", convertido);}
    


    return 0;
}