#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


typedef struct Kontakt{
char nev[51];char taj[12]; struct Kontakt *ki_fertozte; struct Kontakt *kov;
} Kontakt;

void hozzaad(Kontakt **eleje, char *nev, char * taj){
Kontakt *uj=(Kontakt*) malloc( sizeof(Kontakt));
strcpy(uj->nev, nev);
strcpy(uj->taj, taj);
uj->ki_fertozte = NULL;
uj->kov = *eleje;
*eleje = uj;
}

void kiir( Kontakt *eleje)
{
    for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
        printf("nevatjaszam");
}

void felszabadit(Kontakt *eleje){
while (eleje != NULL){
    Kontakt *kov = eleje->kov;
    free(eleje);
    eleje = kov;
}
}

Kontakt* keres(Kontakt *eleje, char *taj){
for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
    if(strcmp(taj, iter->taj))
        return iter;
    return NULL;
}

bool fertoz(Kontakt *eleje, char *kit, char*ki)
{   if(strcmp(kit,ki)==0)
        return false;
    Kontakt *kit = keres(Kontakt *eleje, kit);
    Kontakt *ki  = keres(Kontakt *eleje, ki);
    if(ki == NULL || kit == NULL)
        return false;

    kit->ki_fertozte = ki;
    return true;
}
double hatekonysag(Kontakt *eleje)
 {  int ossz = 0;
    int ismert = 0;
    for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
    {
        ossz++;
        if(iter->ki_fertozte != NULL)
            ismert++;
    }

    return ismert / (double) ossz;

 }

 int hanyat_fertozott(Kontakt *eleje, Kontakt *ki){
 int db = 0;
    for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
            if(iter->ki_fertozte == ki)
                fo++;
            return db;
 }

 void szuperterjeszto (Kontakt*eleje)
 {
     int max = 0;
     for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
     {
         int hany_fo = hanyat_fertozott(eleje, iter);
        if(hany_fo>max)
                max = hany_fo;
     }
    for(Kontakt *iter = eleje; iter != 0; iter = iter->kov)
    {
        if(hanyat_fertozott(eleje,iter) == max)
            printf("%s", iter->nev);
    }
 }

int main(){





return 0;
}
