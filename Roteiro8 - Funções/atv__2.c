/*
Elabore uma fun��o que retorna 1 se for um n�mero � primo,
e 0 (zero) se n�o for. Ent�o utilize a fun��o para imprimir
os n�meros primos de 1 at� 1000.
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

    printf("N�meros primos de 1 a 1000:\n");
    for(i = 2; i <= 1000; i++){
        primo =  verificaPrimo(i);

        if(primo == 1){
            printf("%d\t", i);
        }
    }
    return 0;
}

