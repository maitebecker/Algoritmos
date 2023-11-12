#include<stdio.h>



/**Algoritimo digite 10 numeros e encontre os dois maiores numeros :**/



int main()

{

   int number;

   int i;

   int maior1 = 0;

   int maior2 = 0;



   for( i = 0; i < 10; i++ )

   {

         printf("Digite o valor :");

         scanf("%d",&number);



         if( number > maior1 ){
                if(maior1 > maior2){
                    maior2 = maior1;
         }
         maior1 = number;
         }




   }



   printf("O primeiro maior numero e: %d\n", maior1);

   printf("O segundo maior numero e: %d\n", maior2);



 return 0;

}
