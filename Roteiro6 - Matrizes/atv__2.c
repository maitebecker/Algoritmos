/*
Desenvolva um programa em C em que o usu�rio informa 12 n�meros inteiros,
os quais devem ser armazenados em uma matriz. Com os dados armazenados em
mem�ria, seu programa deve exibir a matriz, e o menor elemento de cada linha,
e o maior elemento de cada coluna.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][4];
    int linha, coluna, maior, menor;

    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            do{
                printf("Informe o elemento da linha %d e da coluna %d: ", linha, coluna);
                scanf("%d", &matriz[linha][coluna]);
                if(matriz[linha][coluna] < 0){
                    printf("Informe um elemento v�lido!\n");
                }
            }
            while(matriz[linha][coluna] < 0);
        }
    }

    printf("\nMatriz:\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nLinha:\n");
    for(linha = 0; linha < 3; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            menor = matriz[linha][0];
            if(matriz[linha][coluna] < menor){
                menor = matriz[linha][coluna];
            }
        }
        printf("o menor n�mero da linha %d �: %d\n", linha, menor);
    }

    printf("\nColuna:\n");
    for(coluna= 0; coluna < 4; coluna++){
        maior = matriz[0][coluna];
        for(linha = 0; linha < 3; linha++){
            if(matriz[linha][coluna] > maior){
                maior = matriz[linha][coluna];
            }
        }
        printf("o maior n�mero da coluna %d �: %d\n", coluna, maior);
    }

    return 0;
}
