/*Use o comando continue em um programa de divisão que respeite a restrição de divisão por zero.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    float num, num2;
    int i;

    for(i=0; i<10; i++){
        printf("digite o primeiro número:");
        scanf("%f",&num);

        printf("digite o segundo número:");
        scanf("%f",&num2);

        if(num2 == 0) {
            printf("Divisão por 0!");
            continue;
        }

        printf("Divisão: %f", num /num2);
    }


}
