#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Kontakt
{
    char nev[50]; char taj[12]; char *fertozo; struct Kontakt* kov;
} Kontakt;

Kontakt *hozzaad(Kontakt *kon, char nevv[50], char tajj[12])
{
     Kontakt *uj = (Kontakt*) malloc(sizeof(Kontakt));
     strcpy(uj->nev, nevv);
     strcpy(uj->taj, tajj);
     uj->kov = kon;
    return uj;

}

bool fertozes(Kontakt * fej, char tajegy[12], char tajketto[12])
{
    Kontakt *mozgo;

for (mozgo=fej; mozgo!=NULL; mozgo=mozgo->kov)
{
  if(strcmp(mozgo->taj,tajegy) == 0)
    if(strcmp(mozgo->kov->taj,tajketto)== 0)
        return true;

}
    return false;

}

int hatekonysag()
{
}

int main()
{
    Kontakt *fertozesek = NULL;
    hozzaad(&fertozesek, "Minta Gedeon", "302 018 703");
    hozzaad(&fertozesek, "Minta Karola", "696 329 017");

    return 0;
}
