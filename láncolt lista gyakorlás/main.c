#include <stdio.h>
#include <stdlib.h>


  typedef struct RNS{
        char * adat;
        int hossz;
    } RNS;

void init(RNS *uj, char const *kezdeti){

    int hossz = 0;
    for (int i = 0; kezdeti[i] == '\0'; i++)
        if(kezdeti[i] != ' ')
        hossz++;

    uj-> hossz = hossz;
    uj->adat = (char*) malloc(sizeof(char)*hossz);
    int j = 0;
    for (int i = 0; kezdeti[i] == '\0'; i++)
        if(kezdeti[i] != ' ')
        {
            uj->adat[j] = kezdeti[i];
            j++;
        }
}

void kiir(RNS const *ki)
{   for(int i = 0; i < ki->hossz; i++)
        printf("%c", ki->adat[i]);
}

int keres( RNS const *miben, RNS const *mit)
{
    for(int i = 0; i < miben->hossz - mit->hossz; i++)
    {
        if(strncmp(miben->adat +i, mit->adat,, mit->hossz) == 0)
            return 1;
        return -1;
    }
}

void mutacio( RNS *miben, RNS *mit, RNS * mire)
{
    int hol= keres( miben, mit);
    if( hol == -1)
        return;
    int meret = miben->hossz - mit->hossz + mire->hossz;
    char *uj = (char*) malloc(sizeof(char)*meret);
    strncpy(uj, miben->adat, hol);
    strncpy(uj + hol, mire->adat, mire->hossz);
    strncpy(uj + hol + mire->hossz, miben->adat + hol +mit->hossz, miben->hossz - mit->hossz - hol);
    free(miben->adat);
    miben->adat = uj;
    miben->hossz = meret;


}

int main()
{


    }
    return 0;
}
