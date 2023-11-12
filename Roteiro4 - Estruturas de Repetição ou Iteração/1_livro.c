/*Escreva um programa de controle de senha que dê
três chances de acerto ao usuário; se ele não conseguir,
o programa deve avisar que o cartão foi bloqueado.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char senha[10];
    char str1[] = "abcd";
    int cont;

  /*  do{
        if(cont == 3)
        {
            printf("conta bloqueada");
            break;
        }
        else
        {
            printf("Digite sua senha:\n");
            gets(senha);
        }
        cont++;
    }while(strcmp(senha, str1) != 0);
*/

   /* for(cont = 0; cont < 3; cont++){
        printf("Digite sua senha:\n");
        gets(senha);

        if(strcmp(senha, str1) == 0){
            printf("senha correta");
            break;
        }

        if(cont == 2){
            printf("conta bloqueada");
            break;
        }
    }*/

     do{
        printf("Digite sua senha:\n");
        gets(senha);

        if(strcmp(senha, str1) == 0){
            printf("senha correta\n");
            break;
        }
        cont++;
    }while(cont < 3);

    if(cont == 3) printf("conta bloqueada");



}
