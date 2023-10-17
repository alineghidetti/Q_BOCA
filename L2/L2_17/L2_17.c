#include <stdio.h>

int ehMinusculo(char c){
    if(c>='a'&&c<='z'){
    return 1;
    }
    return 0;
}

void codifica(int n){
    char c;
    while(1){
        scanf("%c", &c);
         if (ehMinusculo(c)){
            c+=n;
            while(c>'z'){
                c-=26;
            }
        }
        printf("%c", c);
        if(c=='.'){
            break;
        }
    }
}

void decodifica(int n){
    char c;
    while (1){
        scanf("%c", &c);
        if(ehMinusculo(c)){
            c-=n;
            while(c<'a'){
                c+=26;
            }

        }
        printf("%c", c);
        if(c=='.'){
            break;
        }
    }
}

int main(){
    int opc, n;
    scanf("%d %d ", &opc, &n);

    if(n>26){
        n= n%26;
    }

    if(opc==1){
        codifica(n);
    }
    else if(opc==2){
        decodifica(n);
    }
    else{
        printf("Operacao invalida.");
    }

    return 0;
}