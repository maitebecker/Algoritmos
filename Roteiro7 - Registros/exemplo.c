#include <stdio.h>
#include <locale.h>

struct Candidato{
    char nome[50];
    int tot;
};

typedef struct Candidato candidato;

int main(void){
    setlocale(LC_ALL, "Portuguese");
    candidato t[3];

    int v, i;

    for(i = 0; i <= 2; i++){
        setbuf(stdin, NULL);
        printf("Informe o nome do candidato %d: \n", i + 1);
        gets(t[i].nome);
    }

    system("cls");
    printf("%d - %s\n", i + 1, t[i].nome);
     for(i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Informe o  voto %d: \n", i + 1);
        scanf("%d", &v);
        if(v > 0 && v <=3){
             t[v - 1].tot = t[v - 1].tot + 1;
        }

    }

    system("cls");
    printf("Urna eletrônica\n");

    for(i = 0; i <= 2; i++){
         printf("%d - %s: %d votos\n", i + 1, t[i].nome, t[i].tot);
    }


    return 0;
}

