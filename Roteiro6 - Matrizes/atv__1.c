/*
Crie uma matriz de dimensões 3x3 a partir de números inteiros positivos
lidos pelo usuário. Seu programa deve controlar que essa leitura para
aceitar apenas valores válidos. Em seguida, exiba os elementos da
diagonal principal e os elementos da diagonal secundária.
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL, "Portuguese");
    int matriz[3][3];
    int x, i;

    for(i = 0; i < 3; i++){ //linhas
        for(x = 0; x < 3; x++){ //colunas
            do{
                printf("Informe o elemento da linha %d e da coluna %d: ", x, i);
                scanf("%d", &matriz[i][x]);

                if(matriz[i][x] < 0){
                    printf("Informe um número válido!\n");
                }
            }while(matriz[i][x] < 0);

        }
    }

    printf("\nDiagonal principal e diagonal secundária:\n");
      for(i = 0; i < 3; i++){//linhas
        for(x = 0; x < 3; x++){//colunas
            if((x + i == 2) || (x == i)){
                printf("%d", matriz[i][x]);
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
