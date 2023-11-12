/*
Faça um programa em C que leia dois vetores, denominados A e B,
de 5 elementos cada um, respeitando as seguintes regras:

- Vetor A deve conter apenas valores pares;
- Vetor B deve conter apenas valores ímpares.

A partir dos dois vetores, crie uma matriz que:

a) Na primeira linha armazene o vetor A
b) Na segunda linha armazene o vetor B
c) Na terceira linha, contenha para cada coluna a soma
dos elementos da primeira e da segunda linha correspondentes à mesma coluna.

Por fim, exiba a matriz resultante organizada em linhas e colunas.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int a[5];
    int b[5];
    int matriz[3][5];
    int linha, coluna, i;

    printf("Informe valores pares para o vetor A:\n");
    for(i = 0; i < 5; i++){
        do{
            printf("Valor da posição %d do vetor A: ", i);
            scanf("%d", &a[i]);
            if(a[i] % 2 != 0){
                printf("Informe um número par!\n");
            }
        }while(a[i] % 2 != 0);
    }

    printf("\nInforme valores ímpares para o vetor B:\n");
    for(i = 0; i < 5; i++){
        do{
            printf("Valor da posição %d do vetor B: ", i);
            scanf("%d", &b[i]);
            if(b[i] % 2 == 0){
                printf("Informe um número ímpar!\n");
            }
        }while(b[i] % 2 == 0);
    }

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            if(linha == 0){
                matriz[linha][coluna] = a[coluna];
            }
            if(linha == 1){
                   matriz[linha][coluna] = b[coluna];
            }
            if(linha == 2){
                matriz[linha][coluna] = a[coluna] + b[coluna];
            }
        }
    }

    system("cls");
    printf("Matriz:\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 5; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
