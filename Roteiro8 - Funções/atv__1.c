/*
Crie uma fun��o que identifica se um n�mero � par.
A fun��o recebe por par�metro um n�mero inteiro e
devolve 1 se for par ou 0(zero) se n�o for.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int verificaPar(int num)
{
    int flag;
    if(num % 2 == 0){
        flag = 1;
    }
    else{
        flag = 0;
    }

    return flag;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, par;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    par = verificaPar(numero);

    par ? printf("O n�mero � par\n") :  printf("O n�mero � �mpar\n");

    return 0;
}
