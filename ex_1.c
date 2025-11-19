#include <stdio.h>
#include <string.h>

int main() {
    char A[15] = "CURITIBA";
    char B[15] = "SAO PAULO";
    char C[15] = "RIO DE JANEIRO";
    //A = RIO DE JANEIRO
    //B = CURITIBA
    //C = SAO PAULO

    char auxiliar_1[15];
    strcpy(auxiliar_1, A);
    strcpy(A, C);
    strcpy(C, B);
    strcpy(B, auxiliar_1);
    printf("%s \n", A);
    printf("%s \n", B);
    printf("%s \n", C);

    return 0;
}