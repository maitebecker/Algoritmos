/*Escreva um programa que leia um vetor de 10 posições.
Escreva na telaquantos valores pares foram armazenados
nesse vetor.*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#define SIZE 10
int main(void){
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));

    int vet[10], i, par = 0;

    for(i = 0; i < SIZE; i++){
        vet[i] = rand() % 100;

        if(vet[i] % 2 == 0){
            par++;
        }
    }

    printf("Vetor:\n");
    for(i = 0; i < SIZE; i++){
        printf("%d\t", vet[i]);
    }

    printf("\nO vetor tem %d números pares\n", par);

    return 0;
}
