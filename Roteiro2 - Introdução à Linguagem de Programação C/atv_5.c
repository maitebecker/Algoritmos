/* Escreva um algoritmo em C que lê um número, calcula
e exiba na tela o seu quadrado, o seu dobro, o seu
triplo e sua metade.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float numero, quadrado, dobro, metade;

    printf("Digite um número:\n");
    scanf("%f", &numero);

    quadrado = numero * numero;
    dobro = numero * 2;
    metade = numero / 2;

    printf("O quadrado do número é: %.2f\n", quadrado);
    printf("O dobro do número é: %.2f\n", dobro);
    printf("A metade do número é: %.2f\n", metade);
    return 0;
}
