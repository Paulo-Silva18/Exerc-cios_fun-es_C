#include<stdio.h>

int verificarPar(int a, int b, int c){
    if(a%2 == 0){
        printf("%d\n", a);
    }
    if(b%2 == 0){
       printf("%d\n", b);
    }
    if(c%2 == 0){
       printf("%d\n", c);
    }

}

int main(){
    int num1, num2, num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    verificarPar(num1, num2, num3);

    return 0;
}
