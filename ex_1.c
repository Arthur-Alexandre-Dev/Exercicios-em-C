#include <stdio.h>
#include <string.h>

int main() {
    char A[15] = "CURITIBA";
    char B[15] = "SAO PAULO";
    char C[15] = "RIO DE JANEIRO";
    //A = RIO DE JANEIRO
    //B = CURITIBA
    //C = SAO PAULO

    char cidadeAuxiliar[15];

    strcpy(cidadeAuxiliar, A);
    strcpy(A, C);
    strcpy(C, B);
    strcpy(B, cidadeAuxiliar);
    
    printf("%s \n", A);
    printf("%s \n", B);
    printf("%s \n", C);

    return 0;
}