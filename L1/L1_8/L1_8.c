#include <stdio.h>

int main()
{
char letra;

   scanf("%c", &letra);
   
    if (letra == 'A' ||letra == 'a'||letra == 'E' ||letra == 'e' || letra == 'I' || letra == 'i'
    || letra == 'O'|| letra == 'o'|| letra == 'U'|| letra == 'u'){
        printf("Vogal");
    }

    else
        printf("Nao vogal");

    return 0;
}