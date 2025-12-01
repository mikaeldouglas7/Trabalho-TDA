#include <stdio.h>

int main() {

    int numero;   // variável da sequência
    int i;        // variável da repetição DECLARADA ANTES

    // SEQUÊNCIA
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // CONDICIONAL
    if (numero > 10) {
        printf("O numero eh maior que 10.\n");
    } else {
        printf("O numero eh menor ou igual a 10.\n");
    }

    // REPETIÇÃO
    printf("Contando de 1 ate %d:\n", numero);
    for (i = 1; i <= numero; i++) {
        printf("%d\n", i);
    }

    return 0;
}

