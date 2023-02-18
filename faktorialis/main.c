#include <stdio.h>
#include <stdlib.h>

int main()
{   int szam;
int eredmeny=1;
int i = 1;
    printf("add meg a szamot");
    scanf("%d", &szam);

    while (i<=szam)
        {   printf("%d\n",eredmeny);
            eredmeny = eredmeny*i;
    i++;


    }
    printf("az eredmeny: %d", eredmeny);


    return 0;
}
