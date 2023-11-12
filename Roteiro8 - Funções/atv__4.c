/*
Elabore uma função que recebe um vetor de tamanho 5
e devolve o valor médio (double) contido nele.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
double calculaMedia(int vetor[], int tamanho){
    double soma = 0, media;
    int j;
    for(j = 0; j < tamanho; j++){
        soma += vetor[j];
    }
    media = soma / 5;
    return media;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int i, vet[5];
    double media;

    printf("Vetor:\n");
    for(i = 0; i < 5; i++){
        vet[i] = rand() % 10;
        printf("%d\t", vet[i]);
    }

    media = calculaMedia(vet, 5);
    printf("\nMédia do vetor: %.2f\n", media);

    return 0;
}
