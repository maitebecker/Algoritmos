/* Escreva um algoritmo em C que l� um n�mero, calcula
e exiba na tela o seu quadrado, o seu dobro, o seu
triplo e sua metade.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float numero, quadrado, dobro, metade;

    printf("Digite um n�mero:\n");
    scanf("%f", &numero);

    quadrado = numero * numero;
    dobro = numero * 2;
    metade = numero / 2;

    printf("O quadrado do n�mero �: %.2f\n", quadrado);
    printf("O dobro do n�mero �: %.2f\n", dobro);
    printf("A metade do n�mero �: %.2f\n", metade);
    return 0;
}
