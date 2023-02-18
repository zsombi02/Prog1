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

    /* 0-s versenyzõ neve - printf %s */
    printf("%s\n", versenyzok[0].nev );
    /* 2-es versenyzõ helyezése */
    printf("%d\n", versenyzok[2].helyezes);
    /* 4-es versenyzõ születési dátumát (írd meg a datum_kiir függvényt!) */
    datum_kiir(versenyzok[4].szuletes);
    /* 1-es versenyzõ nevének kezdõbetûjét (ne feledd, a sztring karaktertömb) */
    printf("%c\n", versenyzok[1].nev[0]);
    /* az 1-es versenyzõ dobogós-e? igen/nem, akár ?: operátorral, de egy printf-fel */
    if(versenyzok[1].helyezes <4)
        printf("Igen\n");
        else printf("Nem!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

    /* az 4-es versenyzõ gyorsabb-e, mint a 3-as versenyzõ? */
    if(versenyzok[4].helyezes< versenyzok[3].helyezes)
        printf("igen\n");
    else printf("nem\n");
    /* az 1-es versenyzõ ugyanabban az évben született-e, mint a 2-es? */
    if(versenyzok[1].szuletes.ev == versenyzok[2].szuletes.ev )
         printf("igen\n");
    else printf("nem\n");
    /* egészítsd ki a versenyzo_kiir() függvényt,

     * aztán írd ki az 1-es versenyzõ összes adatát */
     versenyzo_kiir(versenyzok[1]);
    /* végül listázd ki az összes versenyzõt sorszámozva, összes adatukkal. */
    for(int i =0; i <5; i++)
    {
       printf("%d: ", i);
       versenyzo_kiir(versenyzok[i]);
       printf("\n\n");
    }

    return 0;
}

void datum_kiir(Datum d) {
    /* dátum kiírása */
    printf("%d.%d.%d.\n", d.ev, d.ho, d.nap);
}

void versenyzo_kiir(Versenyzo v) {
    /* a versenyzõ összes adatának kiírása */
    printf("%s  %d.%d.%d  %d \n", v.nev, v.szuletes.ev, v.szuletes.ho, v.szuletes.nap, v.helyezes);

}
