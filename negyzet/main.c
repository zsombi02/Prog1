#include <stdio.h>
#include <stdlib.h>

int main()
{int oldal;
int a = 0;
int i;
  printf("Add meg a kivant oldalszelesseget!");
    scanf("%d", &oldal);

    printf("+");
    while(a<oldal)
    {printf("-");
    a++;
    }
    printf("+\n");

    a=0;
    while(a<oldal)
    {
    printf("|");
    for(i = 0; i<oldal; i++)
    printf(" ");
    printf("|\n");
    a++;
    }
    a=0;
     printf("+");
    while(a<oldal)
    {printf("-");
    a++;
    }
    printf("+\n");



    return 0;
}
