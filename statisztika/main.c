#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, i;
    int tomb [10];
    printf("irja a szamokat");
   while(scanf("%d", &a)!=EOF)
   {    tomb[a-1]=tomb[a-1]+1;


   }
   int szam = 1;
    for(i = 1 ; i <11; i++)
    {
        printf( "%d :  %d db", szam, tomb[szam-1]);

    }




    return 0;
}
