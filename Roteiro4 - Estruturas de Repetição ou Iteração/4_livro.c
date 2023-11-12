/*	A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
A prefeitura deseja saber:
 a) média do salário da população;
 b) média do número de filhos;
 c) maior salário;
 d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i, num_habitantes, cont = 0;
    float salario[num_habitantes], num_filhos[num_habitantes], soma_salario, soma_filhos, media_salario, media_filhos, maior_salario = 0, percentual;

    printf("Digite o número de habitantes:");
    scanf("%d",&num_habitantes);

    for(i = 1; i <= num_habitantes; i++){
        if(salario < 0){
            printf("numero inválido!");
        }else{
            printf("Informe o salário do habitante %d: ", i);
            scanf("%f", &salario[i]);
        }

        if(num_filhos < 0){
            printf("numero inválido!");
        }
        else{
            printf("Informe o número de filhos do habitante %d: ", i);
            scanf("%f", &num_filhos[i]);
        }

        if(salario[i] > maior_salario){
            maior_salario = salario[i];
        }

        if(salario[i] <= 100){
            cont++;
        }

        soma_salario += salario[i];
        soma_filhos +=  num_filhos[i];
    }

    media_salario = soma_salario / num_habitantes;
    media_filhos = soma_filhos / num_habitantes;
    percentual = (100 * cont) / num_habitantes;

    printf("\n\nMedia do salário da população: %.2f\n", media_salario);
    printf("Média do número de filhos: %.2f\n", media_filhos);
    printf("Maior salário: %.2f\n", maior_salario);
    printf("Percentual de pessoal com salário até R$100,00: %.2f", percentual);

    return 0;
}
