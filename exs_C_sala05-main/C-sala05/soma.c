#include <stdio.h>
#include <stdlib.h>

int main() {
float num1, num2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    resultado = num1 + num2;
    printf("%.2f \n", resultado);

    system("pause");
    return 0;
}