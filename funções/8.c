#include <stdio.h>

float calculaJuros(float c, int m, float t) {
    return c * m * t;
}

int main() {
    float c, t;
    int m;
    scanf("%f %d %f", &c, &m, &t);
    printf("%.2f\n", calculaJuros(c, m, t));
    return 0;
}
