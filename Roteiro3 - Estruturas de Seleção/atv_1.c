/* Proponha um algoritmo em C que peça ao usuário que
digite 2 números, obtenha esses dois valores, calcule
e exiba: a soma, o produto, a diferença e a divisão.
*/
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    float num1, num2;
    int op;

    printf("Digite o primeiro número:\n");
    scanf("%f", &num1);

    printf("Digite o segundo número:\n");
    scanf("%f", &num2);

    printf("1-Soma\n2-Diferença\n3-Produto\n4-Divisão\n");
    printf("Escolha a operação:\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("Soma: %.2f", num1 + num2);
            break;
        case 2:
            printf("Diferença: %.2f", num1 - num2);
            break;
        case 3:
            printf("Produto: %.2f", num1 * num2);
            break;
        case 4:
            if(num2 != 0) printf("Divisão: %.2f", num1 / num2);
            else printf("Divisão por zero!");
            break;
        default:
            printf("Operação inválida!");
    }

    return 0;
}
