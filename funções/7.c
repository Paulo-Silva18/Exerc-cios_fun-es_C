#include <stdio.h>

int somaMaiorMenor(int x, int y, int z) {
    int maior = x > y ? (x > z ? x : z) : (y > z ? y : z);
    int menor = x < y ? (x < z ? x : z) : (y < z ? y : z);
    return maior + menor;
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d\n", somaMaiorMenor(x, y, z));
    return 0;
}
