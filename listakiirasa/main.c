#include "lista.h"
#include "lista.c"
#include <stdlib.h>
#include <stdio.h>



int main()
 {

    Lista *lista=NULL, *tal;

    lista = livege(lista, 66);
   lista = leleje(lista, 55);
   lista = livege(lista, 77);
   lista = leleje(lista, 44);
   lista = leleje(lista, 33);
   lista = leleje(lista, 22);
   lista = leleje(lista, 11);

   listakiir(lista);
   printf("\n\n  Hossz: %d\n", hossz(lista));

   tal = listakeres(lista, 44);
   if (tal!=NULL)
      printf("%d \n", tal->adat);
       else
          printf("nincs   \n");



   listafree(lista);

   return 0;
}
