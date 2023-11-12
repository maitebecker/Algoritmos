/*
Proponha um algoritmo que realize a inicialização da matriz de inteiros x
(apresentada abaixo) com os valores estabelecidos na figura.
10      16      22      28      34      40      46      52      58
12      18      24      30      36      42      48      54      60
14      20      26      32      38      44      50      56      62
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][9];
    int linha, coluna, numero = 0;

    numero = 10;
    matriz[0][0] = numero;
    for(coluna = 0; coluna < 9; coluna ++){
        for(linha = 0; linha < 3; linha++){
            matriz[linha][coluna] = numero;
            numero = numero + 2;
        }
    }

    for(linha = 0; linha < 3; linha ++){
            for(coluna = 0; coluna < 9; coluna++){
                printf("%d\t", matriz[linha][coluna]);
    }
    printf("\n");
    }
    return 0;
}
