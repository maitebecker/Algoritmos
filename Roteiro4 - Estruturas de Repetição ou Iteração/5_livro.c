/*Escreva um programa que calcule a média
 dos números digitados pelo usuário, se eles forem pares.
 O programa deve terminar a leitura se o usuário digitar zero.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num, cont = 0, media = 0, soma = 0;

    do{
        printf("Digite um número: ", num);
        scanf("%d", &num);

        if(num % 2 == 0){
            cont++;
            soma += num;
            media = soma / cont;
        }else{
            printf("Número ímpar!\n");
            continue;
        }

        printf("media: %d\n", media);

    }while(num != 0);



    return 0;
}
