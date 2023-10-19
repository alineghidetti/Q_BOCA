#include <stdio.h>
int main(){
    float num1, num2, result;
    char c;
    scanf("%f", &num1);
    result=num1;
    while(scanf("%f %c", &num2, &c)==2){
        if(c=='-'){
            result -= num2;
        }
        else if(c=='+'){
            result += num2;
        }
        else if(c=='/'){
            result /= num2;
        }
        else if(c=='*'){
            result *= num2;
        }
    }
    printf("%.2f", result);
    return 0;
}