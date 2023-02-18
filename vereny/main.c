#include <stdio.h>
#include <stdlib.h>

typedef struct Datum {
    int ev, ho, nap;
} Datum;

typedef struct Versenyzo {
    char nev[31];
    Datum szuletes;
    int helyezes;
} Versenyzo;

void datum_kiir(Datum d);

void versenyzo_kiir(Versenyzo v);

int main() {
    Versenyzo versenyzok[5] = {
        { "Am Erika", {1984, 5, 6}, 1 },
        { "Break Elek", {1982, 9, 30}, 3 },
        { "Dil Emma", {1988, 8, 25}, 2 },
        { "Kasza Blanka", {1979, 6, 10}, 5 },
        { "Reset Elek", {1992, 4, 5}, 4 },
    };

    /* 0-s versenyz� neve - printf %s */
    printf("%s\n", versenyzok[0].nev );
    /* 2-es versenyz� helyez�se */
    printf("%d\n", versenyzok[2].helyezes);
    /* 4-es versenyz� sz�let�si d�tum�t (�rd meg a datum_kiir f�ggv�nyt!) */
    datum_kiir(versenyzok[4].szuletes);
    /* 1-es versenyz� nev�nek kezd�bet�j�t (ne feledd, a sztring karaktert�mb) */
    printf("%c\n", versenyzok[1].nev[0]);
    /* az 1-es versenyz� dobog�s-e? igen/nem, ak�r ?: oper�torral, de egy printf-fel */
    if(versenyzok[1].helyezes <4)
        printf("Igen\n");
        else printf("Nem!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    /* az 4-es versenyz� gyorsabb-e, mint a 3-as versenyz�? */
    if(versenyzok[4].helyezes< versenyzok[3].helyezes)
        printf("igen\n");
    else printf("nem\n");
    /* az 1-es versenyz� ugyanabban az �vben sz�letett-e, mint a 2-es? */
    if(versenyzok[1].szuletes.ev == versenyzok[2].szuletes.ev )
         printf("igen\n");
    else printf("nem\n");
    /* eg�sz�tsd ki a versenyzo_kiir() f�ggv�nyt,

     * azt�n �rd ki az 1-es versenyz� �sszes adat�t */
     versenyzo_kiir(versenyzok[1]);
    /* v�g�l list�zd ki az �sszes versenyz�t sorsz�mozva, �sszes adatukkal. */
    for(int i =0; i <5; i++)
    {
       printf("%d: ", i);
       versenyzo_kiir(versenyzok[i]);
       printf("\n\n");
    }

    return 0;
}

void datum_kiir(Datum d) {
    /* d�tum ki�r�sa */
    printf("%d.%d.%d.\n", d.ev, d.ho, d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    /* a versenyz� �sszes adat�nak ki�r�sa */
    printf("%s  %d.%d.%d  %d \n", v.nev, v.szuletes.ev, v.szuletes.ho, v.szuletes.nap, v.helyezes);

}
