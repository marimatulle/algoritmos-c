#include <stdio.h>

int main() {
    float preco = 5, subtotal = 0, frete, valor_a_pagar;
    int quantidade = 0, regiao;

    do {
        if(quantidade > 100){
            printf("Você ultrapassou o limite máximo de itens\n");
        }
            printf("Informe a quantidade comprada (limite 100 unidades): ");
            scanf("%d", &quantidade);
    }
     while (quantidade > 100);

        subtotal = quantidade * preco;

    printf("Subtotal da compra: R$ %.2f\n", subtotal);
    
    if (subtotal > 0) {
        printf("\nSelecione sua região:\n");
        printf("1. Norte\n");
        printf("2. Nordeste\n");
        printf("3. Sul\n");
        printf("4. Sudeste\n");
        printf("5. Centro-Oeste\n");
        scanf("%d", &regiao);

        switch (regiao) {
            case 1:
                frete = subtotal * 0.1;
                valor_a_pagar = subtotal + frete;
                printf("Região selecionada: Norte\n");
                printf("Percentual de frete: 10%%\n");
                printf("Frete obtido: R$ %.2f\n", frete);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;
    
            case 2:
                frete = subtotal * 0.08;
                valor_a_pagar = subtotal + frete;
                printf("Região selecionada: Nordeste\n");
                printf("Percentual de frete: 8%%\n");
                printf("Frete obtido: R$ %.2f\n", frete);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;
    
            case 3:
                frete = subtotal * 0.11;
                valor_a_pagar = subtotal + frete;
                printf("Região selecionada: Sul\n");
                printf("Percentual de frete: 11%%\n");
                printf("Frete obtido: R$ %.2f\n", frete);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;

            case 4:
                frete = subtotal * 0.15;
                valor_a_pagar = subtotal + frete;
                printf("Região selecionada: Sudeste\n");
                printf("Percentual de frete: 15%%\n");
                printf("Frete obtido: R$ %.2f\n", frete);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;

            case 5:
                frete = subtotal * 0.12;
                valor_a_pagar = subtotal + frete;
                printf("Região selecionada: Centro-Oeste\n");
                printf("Percentual de frete: 12%%\n");
                printf("Frete obtido: R$ %.2f\n", frete);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;    
    
            default:
                printf("Região inválida\n");
        }
    }

    return 0;
}