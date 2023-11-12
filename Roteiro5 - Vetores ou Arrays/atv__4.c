/*
Fa�a um programa que preencha um vetor de 10 n�meros reais.
Em seguida, calculee mostre na tela a quantidade de n�meros
negativos e a soma dos n�meros positivosdesse vetor.
*/
#include <stdio.h>
#include <time.h>
#include <locale.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    float vet[SIZE], positivos;
    int i, negativos;

    for(i = 0; i < SIZE; i++){
        vet[i] = (rand()%1990) - 990; //gera numeros no intervalo de -990 a 990
        vet[i] = vet[i] / 10; // //gera numeros no intervalo de -99.0 a 99.0
    }

    printf("Vetor:\n");
    for(i = 0; i < SIZE; i++){
       printf("%.1f\t", vet[i]);
    }

    for(i = 0; i < SIZE; i++){
      if(vet[i] < 0){
        negativos++;
      }else{
          positivos += vet[i];
      }
    }

    printf("\n\nQuantidade de n�meros negativos: %d\n", negativos);
    printf("\nSoma de n�meros positivos: %.1f\n", positivos);

    return 0;
}
