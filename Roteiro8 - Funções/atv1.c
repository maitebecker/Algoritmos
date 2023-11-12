/*
1.Crie uma fun��o que identifica se um n�mero � par. A fun��o recebe por par�metro um n�mero inteiro e devolve 1 se for par ou 0(zero) se n�o for.

2.Elabore uma fun��o que retorna 1 se for um n�mero � primo, e 0 (zero) se n�o for. Ent�o utilize a fun��o para imprimir os n�meros primos de 1 at� 1000.

3.Crie  uma fun��o para calcular o complemento de 2 de um n�mero. Ela recebe por par�metro um n�mero inteiro correspondente a um n�mero bin�rio de 8 bits em complemento de dois e devolve (retorna) o n�mero inteiro correspondente ao complemento de 2.

4.Elabore uma fun��o que recebe um vetor de tamanho 5 e devolve o valor m�dio (double) contido nele.

5.O CPF � o c�digo utilizado para muitas finalidades, do cadastro para uma compra online ao registro de um n�mero de celular.
Elabore um fun��o C que recebe um n�mero de CFP (na forma de uma string) e verifica se est�o corretos os d�gitos verificadores (os dois �ltimos d�gitos).
Demonstre ent�o que sua fun��o funciona.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int verificaPar(int num){
    int flag;
    if(num % 2 == 0){
        flag = 1;
    }else{
        flag = 0;
    }

    return flag;
}

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

int calculaComplemento(int num){

    return 256 - num;
}

double calculaMedia(int vetor[], int tamanho){
    double soma = 0;
    for(int j = 0; j < tamanho; j++){
        soma += vetor[j];
    }

    return soma / tamanho;;
}

char verificaCPF(char cpf[]){
    int i, flag = 1, tamanho;
    for(i = 0; i <= 10; i++){ // Verifica se CPF tem tra�os ou pontos
        if(cpf[i] == '.' || cpf[i] == '-'){
            flag = 0;
        }
    }

    tamanho = strlen(cpf);

    if(tamanho >= 12){
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
    srand(time(NULL));

    int numero, par, primo, i, complemento, vet[5], valida, verifica, op;
    double media;
    char cpf[11];

    do{
        system("cls");
        printf("1- Identificar se um n�mero � par\n");
        printf("2- Imprimir os n�meros primos de 1 at� 1000\n");
        printf("3- Calcular o complemento de 2 de um n�mero\n");
        printf("4- Calcular valor m�dio de um vetor de 5 posi��es\n");
        printf("5- Valida um n�mero de CFP\n");
        printf("6- Sair\n");
        printf("Digite a fun��o que voc� quer implementar:\n");
        scanf("%d", &op);

    switch(op){
        case 1:
            system("cls");
            printf("Digite um n�mero: ");
            scanf("%d", &numero);

            par = verificaPar(numero);
            par ? printf("O n�mero � par\n") :  printf("O n�mero � �mpar\n");
            break;
        case 2:
            system("cls");
            printf("\n\nN�meros primos de 1 a 1000:\n");
            for(i = 2; i <= 1000; i++){
                primo =  verificaPrimo(i);
                if(primo == 1){
                    printf("%d ", i);
                }
            }
            break;
        case 3:
            system("cls");
            printf("Digite um n�mero bin�rio de 8 bits em complemento de dois:\n");
            scanf("%d", &numero);
            if(numero < -128 ||  numero > 127){
                printf("N�mero bin�rio de 8 bits fora do intervalo v�lido.\n");
            }else{
                complemento = calculaComplemento(numero);
                printf("O complemento de dois �:%d\n", complemento);
            }
            break;
        case 4:
             system("cls");
             printf("\n\nVetor:\n");
            for(i = 0; i < 5; i++){
                vet[i] = rand() % 10;
                printf("%d\t", vet[i]);
            }

            media = calculaMedia(vet, 5);
            printf("\nM�dia do vetor: %.2f", media);
            break;
        case 5:
            system("cls");
            do{
                printf("\nDigite um n�mero de CPF (sem pontos ou tra�os):\n");
                scanf("%s", cpf);

                verifica = verificaCPF(cpf);
                if(!verifica){
                    printf("\nO CPF n�o deve conter tra�os ou pontos e deve conter 11 digitos!\n\n");
                }
            }while(!verifica);

            valida = validaCPF(cpf);
            valida ? printf("O CPF � v�lido\n") : printf("O CPF � inv�lido\n");
            break;
        case 6:
            break;
        default: printf("Op��o inv�lida\n");
    }
    getch();
    }while(op != 6);


    return 0;
}
