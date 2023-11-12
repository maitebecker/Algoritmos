/*
Escreva um programa que leia três números
do teclado e os imprima na tela na ordem inversa
da entrada.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, num[10];

    for(i=1; i < 6; i++){
        printf("Digite o número %d:\n", i);
        scanf("%d", &num[i]);
    }

    for(i=5; i >= 1; i--){
        printf("O número %d é igual a: %d\n", i, num[i]);
    }


    return 0;
}
