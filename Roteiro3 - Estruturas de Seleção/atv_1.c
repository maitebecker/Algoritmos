/* Proponha um algoritmo em C que pe�a ao usu�rio que
digite 2 n�meros, obtenha esses dois valores, calcule
e exiba: a soma, o produto, a diferen�a e a divis�o.
*/
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    float num1, num2;
    int op;

    printf("Digite o primeiro n�mero:\n");
    scanf("%f", &num1);

    printf("Digite o segundo n�mero:\n");
    scanf("%f", &num2);

    printf("1-Soma\n2-Diferen�a\n3-Produto\n4-Divis�o\n");
    printf("Escolha a opera��o:\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
            printf("Soma: %.2f", num1 + num2);
            break;
        case 2:
            printf("Diferen�a: %.2f", num1 - num2);
            break;
        case 3:
            printf("Produto: %.2f", num1 * num2);
            break;
        case 4:
            if(num2 != 0) printf("Divis�o: %.2f", num1 / num2);
            else printf("Divis�o por zero!");
            break;
        default:
            printf("Opera��o inv�lida!");
    }

    return 0;
}
