#include <stdio.h>

int main() {
    int n = 3; 
    int matriz[3][3] = {{15,5,7},
                        {4,81,3},
                        {2,2,55}};

    int soma_diagonal_principal = 0;
    int soma_diagonal_secundaria = 0;
    
    for (int i = 0; i < n; i++) {
        soma_diagonal_principal += matriz[i][i];
        soma_diagonal_secundaria += matriz[i][n - i - 1];
    }

    printf("Matriz inserida:\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nEssa é a soma da diagonal principal: %d\n", soma_diagonal_principal);
    printf("\nEssa é a soma da diagonal secundária: %d\n", soma_diagonal_secundaria);

    return 0;
}
