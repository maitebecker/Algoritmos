/* Escreva um algoritmo em C que peça ao usuário que
digite 2 números, obtenha esses números e exiba a
soma, o produto e a diferença.
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

    printf("Soma: %d\n", num1 + num2);
    printf("Produto: %d\n", num1 * num2);
    printf("Diferenca: %d\n", num1 - num2);
    return 0;
}
