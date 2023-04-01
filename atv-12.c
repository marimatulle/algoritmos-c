#include <stdio.h>

int main() {
    int preco_chocolate = 3; 
    int quantidade, cedula, total_pago, troco;

    printf("Informe a quantidade de chocolates que deseja comprar: ");
    scanf("%d", &quantidade);

    total_pago = 0;
   
    do {
        printf("Informe a cédula para pagamento (2, 5, 10, 20 ou 50): ");
        scanf("%d", &cedula);

        if (cedula != 2 && cedula != 5 && cedula != 10 && cedula != 20 && cedula != 50) {
            printf("Cédula inválida. Tente novamente.\n");
            continue;
        }

        total_pago += cedula;
    }
    
     while (total_pago < quantidade * preco_chocolate);

    troco = total_pago - quantidade * preco_chocolate;

    printf("Troco: %d\n", troco);

    if (troco > 0) {
        int cedulas[] = {50, 20, 10, 5, 2, 1};
        int quantidade_cedulas[6] = {0};

        for (int i = 0; i < 6 && troco > 0; i++) {
            quantidade_cedulas[i] = troco / cedulas[i];
            troco = troco % cedulas[i];
        }

        printf("Cédulas troco:\n");
        for (int i = 0; i < 6; i++) {
            if (quantidade_cedulas[i] > 0) {
                printf("%d cédulas de %d reais\n", quantidade_cedulas[i], cedulas[i]);
            }
        }
    }

    return 0;
}