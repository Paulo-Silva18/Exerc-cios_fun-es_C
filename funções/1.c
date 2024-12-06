#include<stdio.h>
#include <math.h>

int delta(int a, int b, int c){
    int d = (pow(b, 2) - (4*a*c));
    return d;

}

int main(){
    int v1, v2, v3;

    scanf("%d", &v1);
    scanf("%d", &v2);
    scanf("%d", &v3);

    int deltaResultado = delta(v1, v2, v3);

    printf("%d", deltaResultado);

    return 0;
}
