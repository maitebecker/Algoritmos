/*Elabore um programa que calcule e classifique o IMC*/
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    float peso, altura, imc;

    printf("Digite seu peso:\n");
    scanf("%f", &peso);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if(imc < 18.5){
        printf("IMC: Abaixo do normal\n");
    }
    if(imc >= 18.5 && imc < 25){
        printf("IMC: Normal\n");
    }
    if(imc >= 25 && imc < 30){
        printf("IMC: Sobrepeso\n");
    }
    if(imc >= 30 && imc < 35){
        printf("IMC: Obesidade grau I\n");
    }
    if(imc >= 35 && imc < 40){
        printf("IMC: Obesidade grau II\n");
    }
    if(imc >= 40){
        printf("IMC: Obesidade grau III\n");
    }

    return 0;
}
