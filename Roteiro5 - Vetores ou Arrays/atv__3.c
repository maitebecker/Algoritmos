/*
Faça um programa que receba um vetor X de 10 posições.
 Em seguida deverão ser impressos o maior e o menor elemento desse vetor.
*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int X[SIZE], i, maior, menor;

    for(i = 0; i < SIZE; i++){
        X[i] = rand() % 100;
    }

    printf("Vetor:\n");
    for(i = 0; i < SIZE; i++){
        printf("%d\t", X[i]);
    }

    maior = X[0];
    menor = X[0];

     for(i = 0; i < SIZE; i++){
        if(X[i] > maior){
            maior = X[i];
        }

        if(X[i] < menor){
            menor = X[i];
        }
    }

    printf("\n\nMaior: %d\n", maior);
    printf("\nMenor: %d\n", menor);

    return 0;
}
