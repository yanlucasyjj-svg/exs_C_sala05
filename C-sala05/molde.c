//Inclui a biblioteca stdio.h que permite usar entrada e saida de infos(printf e scanf)
#include <stdio.h>
//Inclui a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include <stdlib.h>
//Inclui a biblioteca locale.h que permite configurar a localizacao do programa (setLocale())
#include <locale.h>

int main() {
    setLocale(LC_ALL, "portuguese");

    system("pause");
    return 0;
}