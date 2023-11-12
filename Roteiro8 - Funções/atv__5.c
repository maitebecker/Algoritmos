/*
O CPF é o código utilizado para muitas finalidades, do cadastro
para uma compra online ao registro de um número de celular.
Elabore um função C que recebe um número de CFP (na forma de uma string)
e verifica se estão corretos os dígitos verificadores (os dois últimos dígitos).
Demonstre então que sua função funciona.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
char verificaCPF(char cpf[]){
    int i, flag = 1, tamanho;
    for(i = 0; i <= 10; i++){ // Verifica se CPF tem traços ou pontos
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
       verificaPrimeiro = 1; // CPF passou na validação do primeiro dígito
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
       verificaSegundo = 1; // CPF passou na validação do segundo dígito
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
        printf("Digite um número de CPF (sem pontos ou traços):\n");
        scanf("%s", cpf);

        verifica = verificaCPF(cpf);
        if(!verifica){
        printf("\nO CPF não deve conter traços ou pontos e deve conter 11 digitos!\n\n");
        }
    }while(!verifica);

    valida = validaCPF(cpf);
    valida ? printf("O CPF é válido\n") : printf("O CPF é inválido\n");


    return 0;
}


