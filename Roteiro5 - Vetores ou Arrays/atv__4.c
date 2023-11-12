/*
Faça um programa que preencha um vetor de 10 números reais.
Em seguida, calculee mostre na tela a quantidade de números
negativos e a soma dos números positivosdesse vetor.
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

    printf("\n\nQuantidade de números negativos: %d\n", negativos);
    printf("\nSoma de números positivos: %.1f\n", positivos);

    return 0;
}
