/* Escreva um programa que leia cinco valores
 * e conte quantos desses valores são negativos, mostrando
 * essa informação no final
 */
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num, i, cont=0;

    for(i = 0; i < 5; i++){
        printf("Digite um número:\n");
        scanf("%d", &num);

        if(num < 0){
           cont++;
        }
    }
     printf("números negativos: %d\n", cont);

     return 0;
}
