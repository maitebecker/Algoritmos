#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int quantidade_alunos, quantidade_aulas, i, aprovados = 0, reprovados_nota = 0, reprovados_falta = 0;
    float nota1, nota2, nota3, quantidade_faltas, menor, media = 0, porcentagem;

    printf("Digite a quantidade de alunos no módulo:");
    scanf("%d",&quantidade_alunos);

    printf("Digite a quantidade de aulas do módulo:");
    scanf("%d",&quantidade_aulas);

    for(i = 1; i <= quantidade_alunos; i++)
    {
        printf("\nDigite a primeira nota do aluno %d:",i);
        scanf("%f",&nota1);

        printf("Digite a segunda nota do aluno %d:",i);
        scanf("%f",&nota2);

        printf("Digite a segunda nota do aluno %d:",i);
        scanf("%f",&nota3);

        printf("Digite a quantidade de faltas do aluno %d:",i);
        scanf("%f",&quantidade_faltas);

        menor = nota1;
        if(nota2 < menor)
        {
            menor=nota2;
        }
        if(nota3 < menor)
        {
            menor=nota3;
        }

        media = (nota1+nota2+nota3-menor) / 2;

        if(media >= 7)
        {

            if((quantidade_aulas * 0.25) > quantidade_faltas)
            {
                aprovados++;
            }
            else
            {
                reprovados_falta++;
            }
        }
        else
        {
            reprovados_nota++;
        }
    }
    porcentagem = 100 / quantidade_alunos;
    printf("\nPorcentagem de alunos aprovados: %.0f %%\n", porcentagem * aprovados);
    printf("Porcentagem de alunos reprovados por falta: %.0f %%\n", porcentagem * reprovados_falta);
    printf("Porcentagem de alunos reprovados por nota: %.0f %%\n", porcentagem * reprovados_nota);

    return 0;
}
