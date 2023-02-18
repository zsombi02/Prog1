#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct bmi
{
    double tomeg, magassag;

} bmi;

bool atlagos(bmi b)
{double i = tomeg/(((magassag)/100)*((magassag)/100));

 if(i >= 18.5 && i <= 25)
    return true;
 else return false;
}
bmi be ()
{
    bmi b;
    scanf("%lf %lf", b.tomeg, b.magassag);
    return b;
}

void kiir (bmi b)
{
    printf("%lf %lf\n", b.tomeg, b.magassag);
}

int main()
{

    return 0;
}
