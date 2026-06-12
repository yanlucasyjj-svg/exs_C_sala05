#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Digite a base e a altura do quadrado: ");
    scanf("%f %f", &base, &altura);

    area = base * altura;

    printf("A area do quadrado e: %.2f\n", area);

    return 0;
}