/*Elabore um algoritmo que fa�a a seguinte pergunta e calcule
as respostas apresentadas no exemplo da figura a seguir:*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int idade, idade_parente, idade_meses;
    float proporcao;

    printf("Qual a sua idade?");
    scanf("%d", &idade);

    idade_meses = idade * 12;
    printf("Sua idade em meses �: %d (meses)\n", idade_meses);

    printf("Qual a idade de um parente seu (Ex: pai, m�e, etc)?");
    scanf("%d", &idade_parente);

    proporcao = (float)idade / (float)idade_parente;
    printf("Sua idade � %f vezes a do seu parente\n", proporcao);

    return 0;
}
