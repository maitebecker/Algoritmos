/*Escreva um programa que receba dez números inteiros
do teclado e diga quantos são pares e quantos são ímpares.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i, par = 0, impar = 0;
    int num[10];

    for(i=1; i <= 10; i++){
        printf("Digite o número %d:",i);
        scanf("%d",&num[i]);

        if(num[i] % 2 == 0){
            par++;
        }
        else
        {
            impar++;
        }
    }

    printf("\nPares: %d\nImpares:%d\n", par, impar);


    return 0;
}
