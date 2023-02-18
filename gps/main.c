#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

typedef struct gps {
    double x, y;
} gps;
void gps_kiir (gps g)
{
    printf("%lf ; %lf", g.x, g.y);

}
bool eszak (gps g)
{
    if(0 <=  g.x)
        return true;
    else return false;
}
bool kelet (gps g)
{
    if(0 <=  g.y)
        return true;
    else return false;
}
gps be ()
{   gps a;
    scanf("%lf %lf", &a.x, &a.y);
    return a;

}

int main()
{   gps hely;
    hely = be();
    gps_kiir(hely);
    if(eszak(hely))
        printf("eszakon van\n");
    else
        printf("nincs eszakon\n");
    if(kelet(hely))
        printf("keleten van\n");
    else
        printf("nincs keleten\n");




    return 0;
}
