#include <stdio.h>

int main(void) {
    char nome[50];
    int numero;

    printf("Informe seu nome: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 1;
    }

    printf("Informe um numero: ");
    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero < 15) {
        printf("SESI\n");
    } else {
        printf("SENAI\n");
    }
    
    return 0;
}                  