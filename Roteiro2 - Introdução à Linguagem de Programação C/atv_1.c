/*Escreva um algoritmo em C que leia um número e exiba na tela: o número lido,
seu antecessor e seu sucessor. Use mensagens que deixe claro para o usuário o
que está sendo exibido.*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int numero, sucessor, antecessor;

    printf("Digite um número:\n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O sucessor do número é: %d\n", sucessor);
    printf("O antecessor do número é: %d\n", antecessor);
    return 0;
}
