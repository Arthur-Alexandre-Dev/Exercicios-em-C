// Nomes em Ordem Alfabética
#include <stdio.h>
#include <string.h>

int main () {
    char nome_1[30], nome_2[30], nome_3[30];
    char aux[30];
    int opcao;

    do {
        printf("\n Digite 3 nomes (separe os nomes com espaco): ");
        scanf("%s %s %s", nome_1, nome_2, nome_3);

        if(strcmp(nome_1, nome_2) > 0) {
            strcpy(aux, nome_1);
            strcpy(nome_1, nome_2);
            strcpy(nome_2, aux);
        }

        if(strcmp(nome_1, nome_3) > 0) {
            strcpy(aux, nome_1);
            strcpy(nome_1, nome_3);
            strcpy(nome_3, aux);
        }

        if(strcmp(nome_2, nome_3) > 0) {
            strcpy(aux, nome_2);
            strcpy(nome_2, nome_3);
            strcpy(nome_3, aux);
        }

        printf("\n Nomes em Ordem Alfabetica: ");
        printf("%s %s %s \n \n", nome_1, nome_2, nome_3);
        
        printf("Voce quer reiniciar ou encerrar o programa? \n \n");
        printf("Digite 0 para Reiniciar! \n");
        printf("Digite 1 para Encerrar! \n");
        printf("Escolha a opcao: ");

        while(scanf("%d", &opcao) == 0) {
            printf("Erro: Digite somente numeros!");
            while(getchar() != '\n');
        }

        while(opcao !=0 && opcao != 1) {
            printf("\n Opcao Invalida! Digite somente 0 ou 1");
            printf("\n Escolha a opcao: ");
            scanf("%d", &opcao);
        }
    
    } while (opcao == 0);

    printf("\n \n Fim do programa!");

    return 0;
}