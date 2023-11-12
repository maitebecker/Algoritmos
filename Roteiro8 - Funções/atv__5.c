/*
O CPF � o c�digo utilizado para muitas finalidades, do cadastro
para uma compra online ao registro de um n�mero de celular.
Elabore um fun��o C que recebe um n�mero de CFP (na forma de uma string)
e verifica se est�o corretos os d�gitos verificadores (os dois �ltimos d�gitos).
Demonstre ent�o que sua fun��o funciona.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
char verificaCPF(char cpf[]){
    int i, flag = 1, tamanho;
    for(i = 0; i <= 10; i++){ // Verifica se CPF tem tra�os ou pontos
        if(cpf[i] == '.' || cpf[i] == '-'){
            flag = 0;
        }
    }

    tamanho = strlen(cpf);

    if(tamanho > 12){
        flag = 0;
    }
    return flag;
}

char validaCPF(char cpf[]){
    int i, num = 10, soma = 0, mul = 0, resto, verificaPrimeiro = 0, verificaSegundo = 0, cont = 0;
    for(i = 0; i < 9; i++){
        mul = num * (cpf[i] - '0');
        soma += mul;
        num--;
    }
    resto = (soma * 10) % 11;
    if(resto == 10){
        resto = 0;
    }
    if(resto == (cpf[9] - '0')){
       verificaPrimeiro = 1; // CPF passou na valida��o do primeiro d�gito
    }

    num = 11;
    soma = 0;
    mul = 0;
    for(i = 0; i < 10; i++){
        mul = num * (cpf[i] - '0');
        soma += mul;
        num--;
    }
    resto = (soma * 10) % 11;
    if(resto == 10){
        resto = 0;
    }
    if(resto == (cpf[10] - '0')){
       verificaSegundo = 1; // CPF passou na valida��o do segundo d�gito
    }

    for(i = 1; i <= 10; i++){ // Verifica se CPF tem todos os digitos iguais
        if((cpf[i] - '0') == (cpf[i-1] - '0')){
            cont++;
        }
    }
    if(cont == 10){
        verificaPrimeiro = 0;
        verificaSegundo = 0;
    }

    if(verificaPrimeiro && verificaSegundo){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int valida, verifica;
    char cpf[11];

    do{
        printf("Digite um n�mero de CPF (sem pontos ou tra�os):\n");
        scanf("%s", cpf);

        verifica = verificaCPF(cpf);
        if(!verifica){
        printf("\nO CPF n�o deve conter tra�os ou pontos e deve conter 11 digitos!\n\n");
        }
    }while(!verifica);

    valida = validaCPF(cpf);
    valida ? printf("O CPF � v�lido\n") : printf("O CPF � inv�lido\n");


    return 0;
}


