#include <stdio.h>
#include <stdlib.h>

int main()
{   double kis, nagy, rad, fok;
int i;
    printf("A kisebb fok: \n");
    scanf("%lf", &kis);
    printf("A nagyobbik fok: \n");
    scanf("%lf", &nagy);
    for(i=0; i<=(nagy-kis); i++)
    {
        fok= kis + i;
        rad= fok * 3.14 / 180;
     printf("[%f] %f", fok, rad);
    }

    return 0;
}
