/* Construa um algoritmo que determine se uma
temperatura torna o ouro em estado l�quido ou n�o.
*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float temp;

    printf("Digite a temperaturo do ouro em graus celsius::\n");
    scanf("%f", &temp);

    if(temp > 1064)
    {
        printf("O ouro est� em estado l�quido\n");
    }
    else
    {
        printf("O ouro est� em estado s�lido\n");
    }
    return 0;
}
