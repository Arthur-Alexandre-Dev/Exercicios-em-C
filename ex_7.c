// Calculadora Simples
#include <stdio.h>

int main() {
    float num_1, num_2, resultado;
    char operador;
    int opcao;
    int operacao_valida;
    do {
        operacao_valida = 1;

        printf("Digite o primeiro numero: ");
        scanf("%f", &num_1);

        printf("Digite o segundo numero: ");
        scanf("%f", &num_2);

        printf("Digite a operacao (+ - * /): ");
        scanf(" %c", &operador);

        if(operador == '+') {
                resultado = num_1 + num_2;
        }
        else if(operador == '-') {
                resultado = num_1 - num_2;
        }
        else if(operador == '*') {
                resultado = num_1 * num_2;
        }
        else if(operador == '/') {
            if(num_2 == 0) {
                printf("Nao e possivel fazer divisao por zero!/n");
                operacao_valida = 0;
            } else {
                resultado = num_1 / num_2;
            }
        }
        else {
            printf("Erro: Digite um operador valido!");
            operacao_valida = 0;
        }

        if (operacao_valida == 1) {
            printf("\nResultado: %.2f\n", resultado);
        }

        printf("\n[1] Continuar");
        printf("\n[0] Encerrar");
        printf("\nEscolha a opcao: ");

        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("\nFim da calcudora!\n");

    return 0;
}