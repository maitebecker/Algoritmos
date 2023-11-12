/*Escreva um programa que
solicite ao usuário três números
inteiros a, b e c, em que a seja maior que 1.
O programa deve somar todos os inteiros entre b
e c que sejam divisíveis por a.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int a = 0, b = 0, c = 0, i = 0, soma = 0;
    char letra;

    printf("Digite o número a:");
    scanf("%d", &a);

    printf("Digite o número b:");
    scanf("%d", &b);

    printf("Digite o número c:");
    scanf("%d", &c);

    if(a >= 1)
    {
        if(b < c)
        {
            for(i = b + 1; i < c; i++)
            {
                if(i % a == 0)
                {
                    soma += i;
                }
            }
        }
        else
        {
            printf("O valor de c deve ser maior do que o de b");
        }
    }
    else
    {
        printf("O valor de a deve ser maior que 1\n");
    }

    printf("\nO valor da soma é: %d\n", soma);


    return 0;
}
