/*
Some os elementos de um vetor de ponto flutuante "c" de 10 elementos.
*/
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int i;
    float C[SIZE], soma = 0;

    for(i = 0; i < SIZE; i++){
        C[i] = rand() % 100;
        C[i] = C[i] / 10;
        //OUTRA OPÇÃO: c[i] = (float)rand() / (float)rand();
    }

    printf("Vetor:\n");
    for(i = 0; i < SIZE; i++){
      printf("%.1f\t", C[i]);
    }

     for(i = 0; i < SIZE; i++){
        soma += C[i];
    }

     printf("\n\nSoma: %.1f\n", soma);

    return 0;
}
