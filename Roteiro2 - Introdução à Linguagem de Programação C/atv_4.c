/* Escreva um algoritmo em C que l� um n�mero inteiro,
calcula e exibe na tela os valores correspondentes a
3%, 30% e 130% do valor informado.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int numero;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero);

    printf("3%% do n�mero �: %.2f\n",numero * 0.03);
    printf("30%% do n�mero �: %.2f\n",numero * 0.3);
    printf("130%% do n�mero �: %.2f\n",numero * 1.3);
    return 0;
}
