/*
Crie  uma função para calcular o complemento de 2 de um número.
Ela recebe por parâmetro um número inteiro correspondente a um número
binário de 8 bits em complemento de dois e devolve (retorna) o número
inteiro correspondente ao complemento de 2.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int calculaComplemento(int num){

    return 256 - num;
}

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int complemento, numero;

    printf("Digite um número binário de 8 bits em complemento de dois:\n");
    scanf("%d", &numero);

    if(numero < -128 ||  numero > 127){
        printf("Número binário de 8 bits fora do intervalo válido.\n");
    }
    else{
        complemento = calculaComplemento(numero);
        printf("O complemento de dois é:%d\n", complemento);
    }

    return 0;
}

