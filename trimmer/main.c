#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void trim (char *szoveg, char *ujszoveg)
{
    int betuelol = 0;
    while(szoveg[betuelol] == ' ')
        betuelol ++;

    int betuhatul = 0;
    while(szoveg[strlen(szoveg)-betuhatul-1] == ' ')
        betuhatul ++;
    int j =0;
    for(int i = betuelol; i<=strlen(szoveg)-betuhatul-1;i++)
    {
        ujszoveg[j] = szoveg[i];
        j++;
    }
    ujszoveg[j] = '\0';

}


int main()
{
    char szoveg [] = "  Szia Uram   ";
    printf("[%s]\n", szoveg );
    char ujszoveg [50];
    trim(szoveg, ujszoveg);
    printf("[%s]", ujszoveg);



    return 0;
}
