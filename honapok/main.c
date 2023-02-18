#include <stdio.h>
#include <stdlib.h>

int main()
{
   int honapok[] = {31, 28, 31, 30, 31, 30,31, 31,30,31,30,31};
    printf("adj meg egy szamot");
    int szam = 0;
    scanf("%d", &szam);
    if(szam>12)
    szam = szam %12;

    printf( "%d", honapok[szam-1]);




    return 0;
}
