#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

// lemasol egy stringet egy uj memoriateruletre. *forras a forras string *uj pedig ahova masol
char *masolat (char *forras)
{
    char *uj = malloc(strlen(forras+1) * sizeof(char));
    strcpy(uj, forras);
    return uj;
}
//a fgv kap egy dinamikusan foglalt es egy normal tombot, ahol a dinamikus tombot belemasolja egy ujba aminek a merete megfelelo
char *hozzafuz ( char* forras, char* plusz)
{
    char *uj = (char*)malloc((strlen(forras) + strlen(plusz) +1) * sizeof(char));
    strcpy(uj, forras);
    strcat(uj, plusz);
    free(forras);
    return uj;
}
//megkap egy tombot es ket indexet ami alapjan letrehoz egy megfelelo meretu dinamikus tombot, es abba behelyezi a megfelelo indexelesu karaktereket.
char *kivag (char* tomb, int kezdo, int vege)
{

    if (kezdo < 0)
        kezdo = 0;
    if (vege > strlen(tomb))
        vege = strlen(tomb);
    char *kivagott = malloc((vege-kezdo) * sizeof(char));
    for( int i = 0; i < strlen(kivagott) -1; i++)
        kivagott[i] = tomb[i+kezdo];
        kivagott[strlen(kivagott)-1] = '\0';
         free(tomb);
        return kivagott;

}
//ket megadott index kozotti reszt kihagyja a parameterkent kert tombbol
char *darab(char  *tomb, int kezdo, int vege)
{


    if (kezdo < 0)
        kezdo = 0;
    if (vege > strlen(tomb))
        vege = strlen(tomb);
    char *vagott = (char*)malloc((strlen(tomb)-(vege-kezdo)+1) * sizeof(char));

    strncpy(vagott, tomb, kezdo);
        vagott[kezdo] = '\0';
        strcat(vagott, tomb+vege);
    free(tomb);
    return vagott;
}
// bekér egy dinamikus tömböt, és egy adott indextõl beleír egy másikat.
char *beszur(char *tomb, int kezdo, char  *beszurni)
{
        int thossz = strlen(tomb);
        int phossz = thossz + strlen(beszurni);
        char *p = (char*) malloc ((phossz+1) * sizeof(char));

    strncpy(p, tomb, kezdo);
    p[kezdo] = '\0';

    strcpy(p+kezdo, beszurni);
    strcat(p, tomb+kezdo);
   // free(tomb);
    return p;
}
int main()
{
    char* cel = masolat("Alma");

        printf("%s \n", cel);
    cel = hozzafuz(cel, "fa");
        printf("%s\n", cel);
    cel = kivag(cel, 1, 3);
        printf("%s \n", cel);
    cel = masolat("Alma");
    cel = darab(cel, 0, 3);
    printf("%s\n", cel);
    char* sztring = "Almafaa";
    sztring = beszur( sztring, 2, "kacsa");
    printf("%s", sztring);
    free(cel);
    free(sztring);
    return 0;
}
