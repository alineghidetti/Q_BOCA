#include <stdio.h>
int main(){
    int i;
    char c, txt;
    printf("RESP:");
    while (1){
        scanf("%c", &c);
            if (c == ' '){
                c='_';
            }
            printf("%c", c);
            if (c == '.' || c == '?' || c == '!'){
                break;
            }
    }
    return 0;
}