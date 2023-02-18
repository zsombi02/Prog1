#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i = 0; i < 32; ++i)
    printf("%2d. %10u\n", i, 1U << i);
    int szam = 1;
    int db = 1;
    while(szam>0)
    {
        szam<<=1;
        db++;
    }
    printf("A bitek szama intben %d\n", db);

    unsigned char c =1;
    db = 0;
    while(c>0)
    {
        c<<=1;
        db++;

    }
    printf("A bitek szama uns charban %d\n", db);

    unsigned short int cc =1;
    db = 0;
    while(cc>0)
    {
        cc<<=1;
        db++;

    }
    printf("A bitek szama uns short intben %d\n", db);
       unsigned int dd =1;
    db = 0;
    while(dd>0)
    {
        dd<<=1;
        db++;

    }
    printf("A bitek szama uns  intben %d\n", db);

    unsigned long int ddd=1;
    db = 0;
    while(ddd>0)
    {
        ddd<<=1;
        db++;

    }
    printf("A bitek szama uns long intben %d\n", db);

    unsigned long long int ccc =1;
    db = 0;
    while(ccc>0)
    {
        ccc<<=1;
        db++;

    }
    printf("A bitek szama uns long long intben %d\n", db);
    return 0;



}
