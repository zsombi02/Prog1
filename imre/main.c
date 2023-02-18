#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   printf("adja meg a nevet");
    char nev[50] ;
    scanf("%s", nev);
    int i =0;
    while(nev[i] != '\0')
        {printf("%c\n", nev[i]);
        i++;
        }
    return 0;
}
