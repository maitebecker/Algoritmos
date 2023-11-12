/* Escreva um algoritmo em C que leia um número e imprima
o seu quadrado no formato “Quadrado: valor”.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite um número:\n");
    scanf("%d", &numero);

    printf("O quadrado do número é: %d\n",numero * numero);
    return 0;
}
