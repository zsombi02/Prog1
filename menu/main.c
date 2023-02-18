#include <stdio.h>
#include <stdlib.h>
int alap(int a);
int plusz(int a);
int fordit(int a);
int szorzas(int a);

int main()
{   int szam =1;
    int menu;
    do
    {
    printf("0. Alapertek visszaallitasa (a = 1)\n"
       "1. Hozzaad 1-et\n"
       "2. Megforditja az elojelet\n"
       "3. Szorozza 2-vel\n"
       "9. Kilepes\n");
       scanf("%d", &menu);
        switch (menu)
        {
        case 0: szam = alap(szam);
                break;
        case 1: szam = plusz(szam);
                break;
        case 2: szam = fordit(szam);
                break;
        case 3: szam = szorzas(szam);
                break;
        default: printf("ervenytelen válasz!\n");
                break;
        }
        printf("\n\na=%d\n\n", szam);
    }
    while( menu !=9);
        return 0;
}
int alap (int a)
{
   return 1;

}
int plusz (int a)
{
    a = a+1;
return a;
}
int fordit (int a)
{
    a = a* (-1);
    return a;
}
int szorzas (int a)
{
    a = a*2;
    return a;
}
