#include <stdio.h>
#include <stdlib.h>

void osszefuz(char cel [], char elso[], char masodik[])
{    int ind = 0;
       while(elso[ind] != '\0')
    {
        cel[ind] = elso[ind];
        ind++;
    }
        cel[ind+1] = ';';
        int indd = 0;
       while(masodik[indd] != '\0')
    {
        cel[ind+1] = masodik[indd];
        ind++;
        indd++;
    }
    cel[ind+1] = '\0';

}


void szetszed(char celegy [],char celketto [], char bemenet[], char valaszto)
{    int ind =0;
    while(bemenet[ind] != valaszto)
    {
        celegy[ind] = bemenet[ind];
        ind++;
    }
    int indd = 0;
    while(bemenet[ind+1] != '\0')
    {
         celketto[indd] = bemenet[ind+1];
        ind++;
        indd++;
    }

}




int main()
{   char elso [] = "Kutya";
    char masodik [] = "Geci";
    char cel[100];
    osszefuz(cel, elso, masodik);
    printf("%s", cel);
    char celegy [15];
    char celketto [15];
    char bemenet [] = "Kutya;Geci";
    char valaszto = ';';
    szetszed(celegy, celketto, bemenet, valaszto);
    printf("%s   %s", celegy, celketto);
    return 0;
}
