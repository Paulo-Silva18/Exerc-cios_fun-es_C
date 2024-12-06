#include <stdio.h>
#include <math.h>

void calculaRaizes(float a, float b, float c) {
    if (a == 0) {
        printf("Nao e uma equacao do segundo grau.\n");
        return;
    }
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        printf("Raiz unica: %.2f\n", -b / (2 * a));
    } else {
        printf("Raizes: %.2f e %.2f\n", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
}

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    calculaRaizes(a, b, c);
    return 0;
}
