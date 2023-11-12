/*Elabore um algoritmo que simule um caixa:
Recebe o valor da compra, recebe o valor em
dinheiro entregue e responde de forma adequada.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float valor_compra, valor_entregue, troco;

    printf("Digite o valor da compra:");
    scanf("%f", &valor_compra);

    printf("Digite o valor entregue ao caixa:");
    scanf("%f", &valor_entregue);

    if(valor_entregue >= valor_compra){
        troco = valor_entregue - valor_compra;
        printf("Valor do troco: R$ %.2f\n", troco);
    }
    else
    {
        printf("Valor insuficiente!\n");
    }

    return 0;
}
