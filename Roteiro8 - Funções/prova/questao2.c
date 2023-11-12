#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float cotacao[10] = {5.14, 5.05, 5.04, 5.06, 5.12, 5, 4.95, 4.98, 4.90, 4.91};
    float  maior, menor;
    int i, hora = 9;

    printf("Hora\t Valor\t\n");
    for(i=0; i < 10; i++){
        printf("%d:00\t %.2f\t\n", hora, cotacao[i]);
        hora++;
    }

    maior = cotacao[0];
    menor = cotacao[0];
    for(i=0; i < 10; i++){
        if(cotacao[i] > maior){
            maior = cotacao[i];
        }

        if(cotacao[i] < menor){
            menor = cotacao[i];
        }
    }

    printf("\nMaior: %.2f\n", maior);
    printf("\nMenor: %.2f\n", menor);

    return 0;
}
