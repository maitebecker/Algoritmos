/*
Proponha um programa em C que lê uma matriz A,
com 2 linhas e 2 colunas. A matriz A deve aceitar apenas
números positivos. O programa também deve ter uma matriz B
com as mesmas dimensões de A, por sua vez, inicializada como valor 2
em todas as posições. A partir das duas matrizes, crie a matriz R,
correspondente ao resto da divisão inteira dos elementos correspondentes
nas matrizes A e B, e a exiba no formato de matriz.
*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int A[2][2], B[2][2], R[2][2], i, j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           A[i][j] = rand() % 10;
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           B[i][j] = 2;
        }
    }

     for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           R[i][j] = A[i][j] % B[i][j];
        }
    }

    printf("Matriz A:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz B:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz R:\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           printf("%d\t", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
