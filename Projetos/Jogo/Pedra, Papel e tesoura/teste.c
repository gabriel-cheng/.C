#include <stdio.h>
#include <stdlib.h>
int main ( ) {
   int inteiro, x;
 
   printf("*** EXEMPLOS PARA USO DA FUCAO RAND ***\n\n");
 
   inteiro=rand();
   srand(25);
   inteiro=rand();
   srand(time(0));
   inteiro=rand();
   inteiro = rand()%51;
   // simular tres jogadas de cara ou coroa com moeda
   printf ( "Simulacao de cara ou coroa\n\n") ;
 
   for (x=1; x<=3; x++) {
      inteiro = (rand()%2);     
      if (inteiro == 0) {
         printf ("Cara\n");
      } else {
    printf ("Coroa\n");
      }
   }
 
   getchar() ;
}
