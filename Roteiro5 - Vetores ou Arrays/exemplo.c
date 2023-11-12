#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");

/*  Exemplo sem vetor:

    int v, tA, tP, tT;

    tA = tP = tT = 0;

    printf("Urna Eletrônica:\n");
    printf("1- Ada:\n");
    printf("2- Pascal:\n");
    printf("3- Turing:\n");

    for(int i = 1; i <= 5; i++){
        printf("Digite o voto %d\n",i);
        scanf("%d",&v);

        switch(v){
        case 1:
            tA = tA + 1;
        break;
        case 2:
            tP = tP + 1;
        break;
        case 3:
            tT = tT + 1;
        break;
        default: printf("Voto inválido");
    }
    }


    printf("Resultado da eleição:\n");
    printf("Votos para Ada: %d\n", tA);
    printf("Votos para Pascal: %d\n", tP);
    printf("Votos para Turing: %d\n", tT);*/

    int v, t[3];

    for(int j = 0; j < 3; j++){
        t[j] = 0;
    }

    printf("Urna Eletrônica:\n");
    printf("1- Ada:\n");
    printf("2- Pascal:\n");
    printf("3- Turing:\n");

    for(int i = 1; i <= 5; i++){
        printf("Digite o voto %d\n",i);
        scanf("%d",&v);

        if(v > 0 && v <=3){
            t[v - 1] = t[v - 1] + 1;
        }else{
            printf("Voto inválido: não computado");
        }
        getch();
        system("cls");
    }


    printf("Resultado da eleição:\n");
    printf("Votos para Ada: %d\n", t[0]);
    printf("Votos para Pascal: %d\n", t[1]);
    printf("Votos para Turing: %d\n", t[2]);

    return 0;
}
