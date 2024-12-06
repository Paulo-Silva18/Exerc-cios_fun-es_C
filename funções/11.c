#include <stdio.h>

void imprimeDivisores(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    if (n > 0) {
        imprimeDivisores(n);
    } else {
        printf("Numero invalido.\n");
    }
    return 0;
}
