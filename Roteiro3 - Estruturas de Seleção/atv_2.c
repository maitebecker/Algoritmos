/* Escreva um algoritmo em C que a partir de 2 inteiros
informados pelo usuário, identifique qual o maior valor
entre eles e o exibe seguido das palavras “valor maior“.
Caso os números sejam iguais, exiba a mensagem “valores
iguais”.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;

    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número:\n");
    scanf("%d", &num2);

    if(num1 == num2)
    {
        printf("Números iguais!\n");
    }
    else
    {
        if(num1 > num2)
        {
            printf("Valor maior: %d", num1);
        }
        else
        {
            printf("Valor maior: %d", num2);
        }
    }
    return 0;
}
