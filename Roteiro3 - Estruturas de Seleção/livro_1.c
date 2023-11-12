/*Escreva um programa que verifique se um ano é bissexto ou não.*/

#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int ano;

    printf("Informe um ano:\n");
    scanf("%d", &ano);

    if(((ano % 4 == 0) && (ano % 100)) != 0 || (ano % 400 == 0))
        printf("O ano é bissexto!\n");
    else
        printf("O ano não é bissexto!\n");

    return 0;
}
