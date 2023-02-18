#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tomb [10] =  {25, 69,  54, 8, 77, 6, 29, 10, 3, 98 };
   int i;
   printf("A tomb: ");
   int min = tomb[0];

   for(i =0; i < 10; i++)
    {
        if(tomb[i]<min)
            min = tomb[i];
    }
     for(i =0; i < 10; i++)
   {
       printf("    [%d]=%d", i, tomb[i]);
       if( tomb[i] == min)
        {printf("MIN");
        }
   }
   printf("\n A legkisebb szam: %d", min);

    return 0;
}
