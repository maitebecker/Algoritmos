/* Escreva um algoritmo em C que leia um n�mero e imprima
o seu quadrado no formato �Quadrado: valor�.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero);

    printf("O quadrado do n�mero �: %d\n",numero * numero);
    return 0;
}
