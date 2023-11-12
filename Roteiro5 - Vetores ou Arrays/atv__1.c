/*
Fa�a um programa que leia um vetor de oito posi��es.
Em seguida, leia tamb�m doisvalores X e Y quaisquer correspondentes
as duas posi��es no vetor. Seu programadever� exibir a soma dos valores
encontrados nas respectivas posi��es X e Y.
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
        printf("\nPrimeiro �ndice:\n");
        scanf("%d", &x);

        if(x < 0 || x >= SIZE){
            printf("Digite um valor v�lido\n");
        }

    }while(x < 0 || x >= SIZE);

    do{
        printf("\nSegundo �ndice:\n");
        scanf("%d", &y);

        if(y < 0 || y >= SIZE){
            printf("Digite um valor v�lido\n");
        }

    }while(y < 0 || y >= SIZE);

    printf("O valor da soma da posi��o %d e da posi��o %d �: %d\n", x, y, vet[x] + vet[y]);

    return 0;
}
