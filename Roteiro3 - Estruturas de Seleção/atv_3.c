/* Escreva um algoritmo em C que leia 3 números inteiros
diferentes, e depois apresente a soma, o produto, o menor
e o maior desses números.
*/
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3, maior, menor;

    printf("Digite o primeiro número:");
    scanf("%d", &num1);

    printf("Digite o segundo número:");
    scanf("%d", &num2);

    printf("Digite o terceiro número:");
    scanf("%d", &num3);

    if((num1 != num2) && (num1 != num3) && (num2 != num3))
    {
        maior = num1;
        if(num2 > maior)
        {
            maior = num2;
        }
        if(num3 > maior)
        {
            maior = num3;
        }

        menor = num1;
        if(num2 < menor)
        {
            menor = num2;
        }
        if(num3 < menor)
        {
            menor = num3;
        }

        printf("Soma: %d\n", num1 + num2 + num3);
        printf("Produto: %d\n", num1 * num2 * num3);
        printf("Maior: %d\n", maior);
        printf("Menor: %d\n", menor);
    }
    else
    {
        printf("Erro: Números iguais!\n");
    }
    return 0;
}
