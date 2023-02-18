#include <stdio.h>
#include <stdlib.h>
/*leírok egy + jelet majd egy ciklusban lerajzolok egy - jelet és ismétlem a ciklust amég el nem éri a megadott mennyiséget, és írok a végére egy + jelet*/

int main()
{ int hossz;
   int x=1;
   printf("milyen hosszu legyen a vonal? \n");
   scanf("%d", &hossz);
   printf("+");
   while(x<=hossz)
   {printf("-");
   x++;
   }
   printf("+");

    return 0;
}
