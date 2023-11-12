/*
Crie  uma fun��o para calcular o complemento de 2 de um n�mero.
Ela recebe por par�metro um n�mero inteiro correspondente a um n�mero
bin�rio de 8 bits em complemento de dois e devolve (retorna) o n�mero
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

    printf("Digite um n�mero bin�rio de 8 bits em complemento de dois:\n");
    scanf("%d", &numero);

    if(numero < -128 ||  numero > 127){
        printf("N�mero bin�rio de 8 bits fora do intervalo v�lido.\n");
    }
    else{
        complemento = calculaComplemento(numero);
        printf("O complemento de dois �:%d\n", complemento);
    }

    return 0;
}

