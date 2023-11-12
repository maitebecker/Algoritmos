/*
Proponha um programa em C, para gerenciar os atletas para os quais o usuário vai torcernas Olimpíadas.
O programa deve ser organizado em funções, e solicitar na inicializaçãoa quantidade de atletas que o usuário
pretende torcer. A primeira deve realizar a leiturae armazenamento dos dados de cada atleta: nome, esporte, idade,
altura, e expectativade medalha (ouro, prata, bronze ou nenhuma). Para isso deve ser empregado struct.

Além disso, observe que o usuário não precisa armazenar todos os atletas de uma vez.Também deve ser implementada uma
função para pesquisar o atleta por nome. Além disso, uma função deve exibir os atletas pela expectativa de medalha, ou seja,
primeiroos com chance de ouro, depois, de prata, e assim sucessivamente.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int armazenados = 0;
struct Atletas
{
    char nome[100];
    char esporte[100];
    int idade;
    double altura;
    char medalha[100];
};


void armazenarDados(struct Atletas *atletas, int i)
{
    int medalha = 0;
    fflush(stdin);
    printf("Digite o nome do atleta %d:\n", i + 1);
    gets(atletas[i].nome);

    printf("Digite o esporte do atleta %d:\n", i + 1);
    gets(atletas[i].esporte);

    printf("Digite a idade do atleta %d:\n", i + 1);
    scanf("%d", &atletas[i].idade);

    printf("Digite a altura do atleta %d:\n", i + 1);
    scanf("%lf", &atletas[i].altura);

    printf("Digite a medalha do atleta %d:\n1- Ouro\n2-Prata\n3-Bronze\n4-Nenhuma\n", i + 1);
    do
    {
        scanf("%d", &medalha);
        switch(medalha)
        {
        case 1:
            strcpy(atletas[i].medalha,"Ouro");
            break;
        case 2:
            strcpy(atletas[i].medalha,"Prata");
            break;
        case 3:
            strcpy(atletas[i].medalha,"Bronze");
            break;
        case 4:
            strcpy(atletas[i].medalha,"Nenhuma");
            break;
        default:
            printf("Escolha um número válido!");
        }
    }
    while(medalha <= 0 || medalha >= 5);

}

void exibirAtleta(struct Atletas *atletas, int i)
{
    printf("%d - Nome: %s\n", i + 1, atletas[i].nome);
    printf("%d - Esporte: %s\n", i + 1, atletas[i].esporte);
    printf("%d - Idade: %d\n", i + 1, atletas[i].idade);
    printf("%d - Altura: %.2lf\n", i + 1, atletas[i].altura);
    printf("%d - Medalhas: %s\n", i + 1, atletas[i].medalha);
}

void mostrarDados(struct Atletas *atletas, char n[])
{
    int flag = 0;
    for(int i = 0; i < armazenados; i++)
    {
        if(strcmp(atletas[i].nome,n) == 0)
        {
            exibirAtleta(atletas, i);
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    if(flag == 0)
    {
        printf("Não há atletas com esse nome!\n");
    }

}

void mostrarPerspectiva(struct Atletas *atletas)
{
    for(int i = 0; i < armazenados; i++)
    {
        if(strcmp(atletas[i].medalha,"Ouro") == 0)
        {
            printf("Ouro: %s\n", atletas[i].nome);
        }
        if(strcmp(atletas[i].medalha,"Prata") == 0)
        {
            printf("Prata: %s\n", atletas[i].nome);
        }
        if(strcmp(atletas[i].medalha,"Bronze") == 0)
        {
            printf("Bronze: %s\n", atletas[i].nome);
        }
        if(strcmp(atletas[i].medalha,"Nenhuma") == 0)
        {
            printf("Nenhuma: %s\n", atletas[i].nome);
        }
    }

}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade, op = 0;
    char n[100];

    printf("Quantidade de atletas:\n");
    scanf("%d", &quantidade);
    struct Atletas atletas[quantidade];


    do
    {
        printf("\n1- Sair\n2- Pesquisar Atleta\n3- Mostrar Perspectiva de Medalha\n4- Armazenar Atleta\n");
        scanf("%d", &op);

        switch(op)
        {
        case 1:
            break;
        case 2:
            system("cls");
            if(armazenados == 0)
            {
                printf("Nenhum atleta foi armazenado!\n");
                break;
            }
            printf("Digite o nome do atleta:");
            scanf("%s", n);
            mostrarDados(atletas, n);
            break;
        case 3:
            system("cls");
            if(armazenados == 0)
            {
                printf("Nenhum atleta foi armazenado!\n");
                break;
            }
            mostrarPerspectiva(atletas);
            break;
        case 4:
            system("cls");
            if(armazenados>=quantidade)
            {
                printf("\nTodos os atletas foram armazenados!\n");
                break;
            }
            armazenarDados(atletas, armazenados);
            armazenados++;
            break;
        }

    }
    while(op != 1);

    return 0;
}


