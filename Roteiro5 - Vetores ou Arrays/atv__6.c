/*
Incluir um valor no elemento 4 do array de ponto flutuante "b".
*/
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int i;
    float B[SIZE];

    for(i = 0; i < SIZE; i++){
        B[i] = rand() % 1000;
        B[i] = B[i] / 10; // gera um numero de 0 a 100.0
         printf("%.1f\t", B[i]);
    }

    printf("Vetor B:\n");
    for(i = 0; i < SIZE; i++){
        printf("%.1f\t", B[i]);
    }

    printf("\n\nDigite um valor para incluir na posição 4 do vetor:\n");
    scanf("%f", &B[4]);

    printf("\nVetor B modificado:\n");
    for(i = 0; i < SIZE; i++){
        printf("%.1f\t", B[i]);
    }

    getch();
    return 0;
}
