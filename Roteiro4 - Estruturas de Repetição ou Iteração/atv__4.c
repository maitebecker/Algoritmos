#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    int n, i = 0, x = 0, soma = 0;

    printf("Digite um número inteiro maior do que zero:");
    scanf("%d", &n);

    if(n > 0){
        for(i = 0; i < n; i++){
            for(x = 0; x <= i; x++){
                    soma += 1;
                printf("%d",soma);
            }
            printf("\n");
        }
    }
    else{
        printf("Número menor do que zero!\n");
    }
    return 0;
}
