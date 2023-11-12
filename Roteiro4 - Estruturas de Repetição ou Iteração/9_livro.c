#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número entre 50 e 75:");
    scanf("%d",num);

    printf("%c",num);

    return 0;
}
