#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct RNS
{
    char * betuk; int hossz;
} RNS;

void letrehoz(RNS *tomb, char *st)
{
    int len =0;
    int i;
    int space = 0;
    while (st[len]!= '\0')
        len++;
    tomb->hossz = len;
    tomb->betuk = (char*)malloc(len*sizeof(char));
    if (tomb->betuk == NULL)
        return 0;
    for (i = 0; i<len;i++)
    {
        if(st[i]==' ')
            space++;
        else tomb->betuk[i-space] = st[i];
    }

}

void kiir(RNS *tomb)
{
    for(int i = 0; i<tomb->hossz; i++)
        printf("%c", tomb->betuk[i]);

}

char * keres (RNS* tomb, char * keresett)
{
    char * hely;
    hely = strstr(tomb->betuk, keresett);
        return hely;
        if(strstr == NULL) return -1;
}




int main()
{    RNS r1, r2, r3;
    letrehoz(&r1, "attaaaggtt tataccttcc caggtaacaa accaaccaac tttccttctc ttgtgactct");
    letrehoz(&r2, "caggtaacaa");
    letrehoz(&r3, "gtttgacaaa cgaactttaa");

    kiir(&r1);
    free(r1.betuk);    free(r2.betuk);    free(r3.betuk);
    return 0;
}

