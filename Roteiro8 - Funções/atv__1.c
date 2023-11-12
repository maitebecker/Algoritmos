/*
Crie uma função que identifica se um número é par.
A função recebe por parâmetro um número inteiro e
devolve 1 se for par ou 0(zero) se não for.
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

    printf("Digite um número: ");
    scanf("%d", &numero);

    par = verificaPar(numero);

    par ? printf("O número é par\n") :  printf("O número é ímpar\n");

    return 0;
}
