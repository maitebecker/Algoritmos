/* Proponha um algoritmo em C para calcular a nota de um
candidato em um concurso. Para isso, você deve ler as três
notas do candidato entre 0 e 10. Em seguida, calcule a nota
final dele no concurso, a qual corresponde à média ponderada,
considerando que a primeira nota tem peso 2, a segunda tem
peso 3 e a terceira tem peso 5. Exibir uma mensagem dizendo
qual a média do aluno e se ele foi aprovado ou reprovado.
A média para aprovação é 7.*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &nota3);

    if((nota1 >= 0) && (nota1 <= 10) && (nota2 >= 0) && (nota2 <= 10) && (nota3 >= 0) && (nota3 <= 10))
    {
        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 4)) / (2 + 3 + 4);
        if(media >= 7)
        {
            printf("Parabéns! Você foi aprovado!\n");
        }
        else
        {
            printf("Você foi reprovado!\n");
        }
    }
    else
    {
        printf("Erro: nota inválida!");
    }
    return 0;
}
