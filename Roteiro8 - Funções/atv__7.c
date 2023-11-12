/*
Desenvolva um programa em C, ORGANIZADO EM FUNÇÕES, em que o usuário informa 16 números positivos
maiores que zero, os quais devem ser armazenados em uma matriz. Com os dados armazenados em memória,
seu programa deve exibir a matriz, eo maior elemento de cada linha, e o menor elemento de cada coluna.
*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
void lerMatriz(int matriz[4][4]){
    srand(time(NULL));
    for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
            // printf("Informe o numero da linha %d e coluna %d:", i, j);
            do{
                //scanf("%d", &matriz[i][j]);
                matriz[i][j] = rand() % 100;
                if(matriz[i][j] < 0){
                    printf("\nInforme um número positivo!\n");
                }
            }while(matriz[i][j] < 0);
       }
    }
}

void exibirMatriz(int matriz[4][4]){
    printf("Matriz:\n");
     for(int i = 0; i < 4; i++){
       for(int j = 0; j < 4; j++){
            printf("%d\t", matriz[i][j]);
       }
       printf("\n");
    }
}

void maiorLinha(int matriz[4][4]){
    int maior;
    for(int i = 0; i < 4; i++){
        maior = matriz[i][0];
        for(int j = 0; j < 4; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        printf("Maior elemento da linha %d: %d\n", i, maior);
    }
}

void menorColuna(int matriz[4][4]){
    int menor;
    for(int j = 0; j < 4; j++){
        menor = matriz[0][j];
        for(int i = 0; i < 4; i++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
        printf("Menor elemento da coluna %d: %d\n", j, menor);
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int  mat[4][4];

    lerMatriz(mat);

    exibirMatriz(mat);

    printf("\n");

    maiorLinha(mat);

    printf("\n");

    menorColuna(mat);
    return 0;
}

