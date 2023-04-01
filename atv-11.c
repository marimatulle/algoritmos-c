#include <stdio.h>

int main() {
    int anos = 0;
    int populacao_A = 90000;
    int populacao_B = 50000;

    while (populacao_A >= populacao_B) {
        populacao_A += populacao_A * 0.009; 
        populacao_B += populacao_B * 0.015; 
        anos++;
    }

    printf("Em %d anos, a população da cidade B será maior que a da cidade A.\n", anos);

    return 0;
}