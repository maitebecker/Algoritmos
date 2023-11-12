/*
Elabore uma função que retorna 1 se for um número é primo,
e 0 (zero) se não for. Então utilize a função para imprimir
os números primos de 1 até 1000.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int verificaPrimo(int num){
    int i, cont, flag = 1;

    for(i = 2; i < num; i++){
        if(num % i == 0){
           flag = 0;
           break;
        }
    }
    return flag;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int  primo, i;

    printf("Números primos de 1 a 1000:\n");
    for(i = 2; i <= 1000; i++){
        primo =  verificaPrimo(i);

        if(primo == 1){
            printf("%d\t", i);
        }
    }
    return 0;
}

