#include <stdio.h>
#include <locale.h>
#include <time.h>

struct Estudante{
    char nome[50];
    char endereco[100];
    int matricula;
};

void lerEstudante(struct Estudante *estudante, int i){
        fflush(stdin);
        printf("Digite o nome do estudante %d:\n", i + 1);
        gets(estudante[i].nome);
        printf("Digite o endereco do estudante %d:\n", i + 1);
        gets(estudante[i].endereco);
        printf("Digite a matricula do estudante %d:\n", i + 1);
        scanf("%d", &estudante[i].matricula);
}

void imprimeEstudante(struct Estudante *estudante, int i){
        printf("%d- Nome: %s\n", i + 1, estudante[i].nome);
        printf("%d- Endereco: %s\n", i + 1, estudante[i].endereco);
        printf("%d- matricula: %d\n", i + 1, estudante[i].matricula);
        printf("\n");
}


int main(void){
    setlocale(LC_ALL,"Portuguese");
    struct Estudante estudante[9];
    int i, armazenados;
    char op;

    for(i = 0; i <= 9; i++){
        if(op == 's'){
            break;
        }
        lerEstudante(estudante, i);
        fflush(stdin);
        printf("\nDigite \"s\" para sair e qualquer tecla para continuar\n");
        scanf("%c", &op);
    }

    system("cls");

    armazenados = i;
    printf("Estudantes:\n\n");
     for(int i=0; i < armazenados; i++){
         imprimeEstudante(estudante, i);
     }

     getch();
    return 0;
}
