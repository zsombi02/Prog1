#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  szam=0, kezdo, vege;
    int kul = 1;
    printf("Add meg a kezdo erteket!");
    scanf("%d", &kezdo);
    printf("Add meg a lezaro erteket!");
    scanf("%d", &vege);
    szam=kezdo;
    while(szam <=vege)
    {
        printf("%d  ", szam);
        szam = szam+ kul;
        kul++;

    }




    return 0;
}
