/*
Copie os valores do array "a" na primeira parte do array "b".
Considere double a[11] e b[34].
*/
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define SIZE_a 11
#define SIZE_b 34

int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int i;
    double A[SIZE_a], B[SIZE_b];

    for(i = 0; i < SIZE_a; i++){
        A[i] = rand() % 100;
        A[i] = A[i] / 10;
    }

     for(i = 0; i < SIZE_b; i++){
        B[i] = rand() % 100;
        B[i] = B[i] / 10;
    }

    printf("Vetor A:\n");
    for(i = 0; i < SIZE_a; i++){
         printf("%.2f\t", A[i]);
    }

    printf("\n\nVetor B:\n");
    for(i = 0; i < SIZE_b; i++){
        printf("%.2f\t", B[i]);
    }

     for(i = 0; i < SIZE_a; i++){
        B[i] = A[i];
    }

    printf("\n\nVetor B modificado:\n");
     for(i = 0; i < SIZE_b; i++){
       printf("%.2f\t", B[i]);
    }

    getch();

    return 0;
}
