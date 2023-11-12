/*Escreva um programa que verifique se um ano � bissexto ou n�o.*/

#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int ano;

    printf("Informe um ano:\n");
    scanf("%d", &ano);

    if(((ano % 4 == 0) && (ano % 100)) != 0 || (ano % 400 == 0))
        printf("O ano � bissexto!\n");
    else
        printf("O ano n�o � bissexto!\n");

    return 0;
}
