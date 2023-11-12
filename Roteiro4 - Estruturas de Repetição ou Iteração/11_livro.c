/*Escreva um programa que sorteie os números
 necessários para a Mega Sena. Dica: usar a geração
 de números aleatórios com rand( ).
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i, par = 0, impar = 0;

    srand(time(NULL));

    for(i=0; i<6; i++){
        printf("%d\n",rand() % 60);
    }



    return 0;
}
