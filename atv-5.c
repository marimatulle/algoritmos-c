#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {  
    int estado_civil;
    printf("Digite seu estado civil de acordo com a legenda: (1 = solteiro, 2 = casado, 3 = divorciado ou 4 = viúvo): ");
    scanf("%d", &estado_civil); 
    
    switch(estado_civil) {
        case 1:
        int idade;
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Você tem %d anos e é solteiro(a).\n", idade);
        break;

        case 2:
        char sexo[10], nome_conjuge[50];
        printf("Digite seu sexo (masculino ou feminino): ");
        scanf("%s", sexo);
        printf("Digite o nome do seu conjuge: ");
        scanf("%s", nome_conjuge);
        printf("Você é casado com %s e seu sexo é %s.\n", nome_conjuge, sexo);
        break;

        case 3:
        int num_filhos, idade_mais_velho;
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &num_filhos);
        if (num_filhos > 0) {
            printf("Digite a idade do mais velho: ");
            scanf("%d", &idade_mais_velho);
        }
        else {
            idade_mais_velho = 0;
        }
        printf("Você é divorciado(a) com %d filho(s) e o mais velho tem %d ano(s).\n", num_filhos, idade_mais_velho);
        break;

        case 4:
        char cidade[50];
        float salario_atual;
        printf("Digite a cidade onde vive: ");
        scanf("%s", cidade);
        printf("Digite seu salário atual: ");
        scanf("%f", &salario_atual);
        printf("Você é viuvo(a), mora em %s e seu salario atual é R$ %.2f.\n", cidade, salario_atual);
        break;

        default:
        printf("Situação civil inválida.\n");
        return 1;
    }

    return 0;
}