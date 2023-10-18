#include <stdio.h>

int main(){
    char c;
    int cont=0, cont2=0;

    printf("RESP:");

    while (1){
        scanf("%c", &c);

        if(c=='.'){
            break;
        }
        else if (c=='('){
            cont++;
            if(cont>cont2+1){
                printf("%c", c);
            }
            while(cont!=cont2){
                scanf("%c", &c);
                if (c==')'){
                    cont2++;
                    if(cont!=cont2){
                        printf("%c", c);
                    }
                    continue;
                }
                if(c=='('){
                    cont++;
                }
                printf("%c", c);
            }
        }
    }

    return 0;
}
