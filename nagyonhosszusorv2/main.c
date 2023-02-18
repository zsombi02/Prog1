#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int *hosszu ()
{
    int db=1;
    char betu=0;
    char *betuk;
    char *uj;
    while(betu!='\n')
        {
        betuk=(char*)malloc(db*sizeof(char));
        for(int i=0; i<db; i++){
            betuk[i]=uj[i];
        }
        scanf("%c", &betu);
        betuk[db-1]=betu;
        if(betu!='\n')
        {
            uj=(char*)malloc(db*sizeof(char));
            for(int i=0; i<db; i++){
                uj[i]=betuk[i];
            }
            db++;
            free(betuk);
        }
    }
    return uj;
}
int main(void)
{   int *p = hosszu();

        printf("%s ", p);

    return 0;
}
