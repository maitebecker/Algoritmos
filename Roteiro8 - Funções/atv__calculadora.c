#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void exiba(){
    printf("Escolha uma operação:\n");
    printf("+: Soma\n-: Subtração\n*: Multiplicação\n/: Divisão\n\n");
}
char leia(char *x)
{
   fflush(stdin);
    printf("Informe a operação:");
    scanf("%c", x);
}

int soma(int x, int y){
    return x + y;;
}

int subtracao(int x, int y){
    return x - y;
}

void multi(int x, int y, int *mul){
    *mul = x * y;
}

void divisao(int x, int y){
   double resultado;
    if(y != 0){
         resultado = (double)x / y;
    }
    else{
        resultado = 0;
    }
    printf("Divisão: %.2f", resultado);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int a, b, total;

    char op;

    exiba();

    printf("Informe um inteiro:");

    scanf("%d",&a);

    printf("Informe outro inteiro:");

    scanf("%d",&b);

    leia(&op);

    switch(op){
        case '+':
        printf("Soma: %d\n",soma(a,b));
        break;

        case '-':
        total = subtracao(a,b);
        printf("Subtracao: %d\n",total);
        break;

        case '*':
        multi(a,b,&total);
        printf("Multiplicacao: %d\n",total);
        break;

        case '/':
        divisao(a,b);
        break;

        default:
        printf("Opcao invalida\n");
    }

    return 0;
}
