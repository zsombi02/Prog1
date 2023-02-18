#include <stdio.h>
#include <stdlib.h>
void csere (char cel[],char forras[], char karakter, int szam)
{    for(int i=0; i<szam; i++)
            cel[i] = karakter;
    int i = 0;
    while(forras[i] != '\0')
{
        if (forras[i] ==' ')
        {   cel[i+szam]= karakter;

        }
        else
            cel[szam+i] = forras[i];

    i++;

}

    for(int b = 0; b<szam; b++)
             cel[i+b+szam] = karakter;

cel[i+szam+szam] = '\0';
}


int main()
{   char szavak[] = "csa csumi csa cso";
    char cel[100];
    int b=4;
    char a ='x';
    csere(cel, szavak, a, b );
    printf("%s", cel);
    return 0;
}
