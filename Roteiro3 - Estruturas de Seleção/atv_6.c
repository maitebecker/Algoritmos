/*Elabore um algoritmo que avalia se o condutor está
 guiando um carro na velocidade adequada em uma estrada
 com o limite 110Km/h.
 A velocidade minima não pode ser inferior à metade da
 velocidade máxima estabelecida.
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
        printf("Cuidado: Você está abaixo da velocidade permitida!");
    }
    else
    {
        if(velocidade > velocidade_max)
        {
            printf("Cuidado: Você está acima da velocidade permitida!");
        }
        else
        {
            printf("Você está dentro da velocidade permitida!");
        }
    }
    return 0;
}
