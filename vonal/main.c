#include <stdio.h>
#include <stdlib.h>
/*le�rok egy + jelet majd egy ciklusban lerajzolok egy - jelet �s ism�tlem a ciklust am�g el nem �ri a megadott mennyis�get, �s �rok a v�g�re egy + jelet*/

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
