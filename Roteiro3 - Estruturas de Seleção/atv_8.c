/* Construa um algoritmo que determine se uma
temperatura torna o ouro em estado líquido ou não.
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
        printf("O ouro está em estado líquido\n");
    }
    else
    {
        printf("O ouro está em estado sólido\n");
    }
    return 0;
}
