#include <stdio.h>

int main() {
    char frase[1000];  // Suponha que a frase não terá mais do que 1000 caracteres
    char caractere;
    int i = 0;

    //printf("Digite a frase terminada com '.', '?' ou '!': ");
    while (1) {
        caractere = getchar();  // Lê um caractere da entrada padrão
        if (caractere == '.' || caractere == '?' || caractere == '!') {
            break;  // Sai do loop se encontrar '.', '?' ou '!'
        }
        if (caractere == ' ') {
            frase[i] = '_';  // Substitui espaço por sublinhado
        } else {
            frase[i] = caractere;
        }
        i++;
    }
    frase[i] = '\0';  // Adiciona o caractere nulo para indicar o fim da string

    printf("RESP: %s\n", frase);  // Imprime a frase modificada

    return 0;
}
