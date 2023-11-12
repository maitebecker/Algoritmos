/*Escreva um programa que leia uma data
e verifique se esta � v�lida ou n�o..*/

#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int dia, mes, ano;

    printf("Digite uma data no formato dd mm aa:\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if(mes >= 1 && mes <= 12)
    {

        switch(mes)
        {
            case 4: case 6: case 9: case 11:
                if(dia > 0 && dia <=30) printf("Data v�lida!\n");
                else printf("Data inv�lida!\n");
                break;
            case 2:
                if(((ano % 4 == 0) && (ano % 100)) != 0 || (ano % 400 == 0))
                {
                    if(dia == 29) printf("Data v�lida!\n");
                    else printf("Data inv�lida!\n");
                }
                else
                {
                    if(dia == 28) printf("Data v�lida!\n");
                    else printf("Data inv�lida!\n");
                }
                break;
            default:
                if(dia > 0 && dia <=31) printf("Data v�lida!\n");
                else printf("Data inv�lida!\n");
        }

    }
    else
    {
      printf("Data inv�lida!\n");
    }

    return 0;
}
