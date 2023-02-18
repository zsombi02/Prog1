#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void torol(unsigned long *t, int meret)
{
    for (int i = 0; i < meret; i++)
    {
        t[i] &= 65535;
        t[i] &= ~65535;
        t[i] |= 65535;
        t[i] |= ~65535;
        t[i] ^= 65535;
        t[i] ^= ~65535;
    }
}

void szin (unsigned long *t, int x, int y)
{


    t[y] |= 1<<(31-x);
}

void kiiras(unsigned long *t, int meret)
{
for (int i = 0; i < meret; i++)
    {
    for (int j = 31; j >= 0; j--)
        {
    printf("%c", (t[i]>>j & 1) != 0 ? '#' : ' ');
        }
printf("\n");
    }
}



int main(void)
{
    unsigned long t[24];

    torol(t, 24);

        for (int i = 5; i < 27; i++)
        {
            szin (t, i, 3);
        }

for (int i = 4; i < 19; i++)
    {
        szin(t, 5, i);
        szin(t, 26, i);
    }

for (int i = 5; i < 27; i++)
    {
        szin(t, i, 19);
    }
kiiras(t, 24);



    return 0;


}

