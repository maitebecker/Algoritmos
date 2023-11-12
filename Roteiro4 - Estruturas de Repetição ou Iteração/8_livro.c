/*Escreva um programa que calcule a área de vários
 círculos de raio r, até que o usuário digite “n”.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float raio, area;
    char letra;
    int cont=1;

    do
    {
        printf("Digite o raio do círculo %d:", cont);
        scanf("%f", &raio);
        fflush(stdin);
        area = 3.14 * (raio * raio);
        printf("O ara do circulo %d é: %f\n", cont, area);
        cont++;
        printf("Digite n para encerrar o programa\n");
    }
    while(letra = getchar() != 'n');

    return 0;
}
