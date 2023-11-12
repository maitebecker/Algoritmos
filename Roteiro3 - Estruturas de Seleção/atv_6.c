/*Elabore um algoritmo que avalia se o condutor est�
 guiando um carro na velocidade adequada em uma estrada
 com o limite 110Km/h.
 A velocidade minima n�o pode ser inferior � metade da
 velocidade m�xima estabelecida.
 */
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float velocidade, velocidade_min, velocidade_max = 110;

    printf("Digite a velocidade do carro:\n");
    scanf("%f", &velocidade);

    velocidade_min = velocidade_max / 2;

    if(velocidade < velocidade_min)
    {
        printf("Cuidado: Voc� est� abaixo da velocidade permitida!");
    }
    else
    {
        if(velocidade > velocidade_max)
        {
            printf("Cuidado: Voc� est� acima da velocidade permitida!");
        }
        else
        {
            printf("Voc� est� dentro da velocidade permitida!");
        }
    }
    return 0;
}
