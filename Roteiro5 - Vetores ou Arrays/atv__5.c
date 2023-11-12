/*
Faça um programa que receba dois arrays, A e B, com 10 números inteiros cada.
Crie um novo array C, correspondente a A – B, mostre na tela os dados do array C.
*/
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int A[SIZE], B[SIZE], C[SIZE], i;

    for(i = 0; i < 10; i++){
        A[i] = rand() % 100;
        B[i] = rand() % 100;
    }

    printf("Vetor A:\n");
    for(i = 0; i < SIZE; i++){
       printf("%d\t", A[i]);
    }

    printf("\n\nVetor B:\n");
    for(i = 0; i < SIZE; i++){
       printf("%d\t", B[i]);
    }

    printf("\n\nVetor C : (A - B):\n");
    for(i = 0; i < SIZE; i++){
        C[i] = A[i] - B[i];
        printf("%d\t", C[i]);
    }

    return 0;
}
