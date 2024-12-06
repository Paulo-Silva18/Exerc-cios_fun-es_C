#include<stdio.h>
#include <string.h>

int qnt1AteN(int n){
    for(int i = 1; i <= n; i++){
        printf("%d\n", i);
    }

}

int main(){
    int num;

    scanf("%d", &num);

    qnt1AteN(num);

    return 0;
}
