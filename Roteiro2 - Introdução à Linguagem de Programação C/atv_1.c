/*Escreva um algoritmo em C que leia um n�mero e exiba na tela: o n�mero lido,
seu antecessor e seu sucessor. Use mensagens que deixe claro para o usu�rio o
que est� sendo exibido.*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int numero, sucessor, antecessor;

    printf("Digite um n�mero:\n");
    scanf("%d", &numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O sucessor do n�mero �: %d\n", sucessor);
    printf("O antecessor do n�mero �: %d\n", antecessor);
    return 0;
}
