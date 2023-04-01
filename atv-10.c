#include <stdio.h>

int main() {
    int n, i, numero, maior;

    printf("Digite a quantidade de números a serem fornecidos: ");
    scanf("%d", &n);

    printf("Digite %d numeros:\n", n);

    scanf("%d", &maior);

    for (i = 2; i <= n; i++) {
        scanf("%d", &numero);
        if (numero > maior) {
            maior = numero;
        }
    }

    printf("Maior número fornecido: %d\n", maior);

    return 0;
}