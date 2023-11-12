/* Elabore um algoritmo em C que, uma vez que o usuário
informe a idade de um atleta, o programa o classifique em
uma das modalidades a seguir dos jogos da primavera:

Infantil A = 6 a 8 anos
Infantil B = 9 a 12 anos
Juvenil A = 13 a 14 anos
Juvenil B = 15 a 18 anos

Pessoas com menos de 6 anos ou maiores de 18 anos não
podem participar da competição.
*/
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    int idade;

    printf("Informe a idade do atleta:\n");
    scanf("%d", &idade);

    if(idade >= 6 && idade <= 18)
    {
        if(idade <= 8)
        {
            printf("Modalidade: Infantil A");
        }
        else
        {
            if(idade <= 12)
            {
                printf("Modalidade: Infantil B");
            }
            else
            {
                if(idade <= 14)
                {
                    printf("Modalidade: Juvenil A ");
                }
                else
                {
                    if(idade <= 18)
                    {
                        printf("Modalidade: Juvenil B ");
                    }
                }
            }
        }
    }
    else
    {
        printf("Erro: Idade inválida\n");
    }
    return 0;
}
