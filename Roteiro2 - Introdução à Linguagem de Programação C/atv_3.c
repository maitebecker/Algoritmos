/* Escreva um algoritmo em C que pe�a ao usu�rio que
digite 2 n�meros, obtenha esses n�meros e exiba a
soma, o produto e a diferen�a.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2;

    printf("Digite o primeiro n�mero:\n");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero:\n");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Produto: %d\n", num1 * num2);
    printf("Diferenca: %d\n", num1 - num2);
    return 0;
}
