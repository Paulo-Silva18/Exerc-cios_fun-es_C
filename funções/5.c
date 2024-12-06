#include <stdio.h>

float somaPA(float a1, float an, int n) {
    return (n * (a1 + an)) / 2.0;
}

int main() {
    float a1, an;
    int n;
    scanf("%f %f %d", &a1, &an, &n);
    printf("%.2f\n", somaPA(a1, an, n));
    return 0;
}
