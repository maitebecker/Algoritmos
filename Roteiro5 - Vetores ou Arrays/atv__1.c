/*
Faça um programa que leia um vetor de oito posições.
Em seguida, leia também doisvalores X e Y quaisquer correspondentes
as duas posições no vetor. Seu programadeverá exibir a soma dos valores
encontrados nas respectivas posições X e Y.
*/
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define SIZE 8
int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int vet[SIZE], x, y, i;

    for(i = 0; i < SIZE; i++){
        vet[i] = rand() % 100;
    }

    printf("Vetor:\n");
    for(i = 0; i < SIZE; i++){
      printf("%d\t", vet[i]);
    }

    printf("\n\nEscolha dois indices (0-7) para somar os valores...\n");
    do{
        printf("\nPrimeiro Índice:\n");
        scanf("%d", &x);

        if(x < 0 || x >= SIZE){
            printf("Digite um valor válido\n");
        }

    }while(x < 0 || x >= SIZE);

    do{
        printf("\nSegundo Índice:\n");
        scanf("%d", &y);

        if(y < 0 || y >= SIZE){
            printf("Digite um valor válido\n");
        }

    }while(y < 0 || y >= SIZE);

    printf("O valor da soma da posição %d e da posição %d é: %d\n", x, y, vet[x] + vet[y]);

    return 0;
}
