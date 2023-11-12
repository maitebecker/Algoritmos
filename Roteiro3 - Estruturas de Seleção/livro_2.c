/*Escreva um programa que indique o n�mero
 de dias existentes em um m�s (fevereiro = 28 dias)*/
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int mes, dias;

    printf("Informe o n�mero do mes:");
    scanf("%d", &mes);

    if(mes >=1 && mes <=12)
    {
        switch(mes)
        {
            case 4: case 6: case 9: case 11:
                dias = 30;
                break;
            case 2:
                dias = 28;
                break;
            default:
                dias = 31;
        }
        printf("O m�s %d tem %d dias\n", mes, dias);
    }
    else
    {
        printf("Valor inv�lido");
    }
    return 0;
}
