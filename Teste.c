//Números em Ordem Decrescente
//Validar se o usuário digitar mais de 3 números ou menos
#include <stdio.h>

int main() {
    float num[3];
    int size;
    float aux;
    int opcao;

    do {
        printf("\n Digite 3 numeros (separe os numeros por espaco): ");

        while(scanf("%f %f %f", &num1, &num2, &num3) == 0) {
            printf("\n Erro: Digite apenas numeros! \n");
            while(getchar() != '\n');
            printf("\n Digite 3 numeros (separe os numeros por espaco): ");
        }

        if(num1>num2) {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }

        if(num1>num3) {
            aux = num1;
            num1 = num3;
            num3 = aux;
        }

        if(num2>num3) {
            aux = num2;
            num2 = num3;
            num3 = aux;
        }

        printf("Numeros em Ordem Decrescente: %.2f %.2f %.2f", num3, num2, num1);

        printf("\n Voce quer reiniciar ou encerrar o programa? \n \n");
        printf("Digite 0 para reiniciar! \n");
        printf("Digite 1 para encerrar! \n");
        printf("Escolha a opcao: ");
        
        while(scanf("%d", &opcao) == 0) {
            printf("Erro: Digite apenas numeros!");
            while(getchar() != '\n');
            printf("\n Escolha a opcao: ");
        }

        while(opcao != 0 && opcao != 1) {
            printf("\n Opcao Invalida! Digite somente 0 ou 1");
            scanf("d", opcao);
            printf("\n Escolha a opcao: ");
        }
    } while(opcao == 0);

    printf("\n \n Finalizando Programa...");

    return 0;
}