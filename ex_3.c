#include <stdio.h>

int main () {
    float preco;
    int codigo;
    printf("Digite um preco: ");

    while (scanf("%f", &preco) == 0) {
        printf("Erro: Voce digitou um texto. Digite um numero (ex: 2.5): ");
        
        while(getchar() != '\n');
    }

    printf("Digite o codigo do produto: ");
    while (scanf("%d", &codigo) == 0) {
        printf("Erro: Valor digitado invalido. Digite apenas numeros inteiros (4): ");

        while(getchar() != '\n');
    }

    if (codigo >= 1 && codigo <= 5) {
        printf("O produto e do Norte\n");
    }
    if (codigo >= 4 && codigo <= 10) {
        printf("O produto e do Sudeste\n");
    }
    if (codigo >= 9 && codigo <= 14) {
        printf("O produto e do Nordeste\n");
    }
    if (codigo >= 14) {
        printf("O produto e de Outra Regiao\n");
    }
    else {
        printf("O produto e Importado\n");
    }

    return 0;
}