#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 double kob(double);
 double abszolut(double);

int main()
{   double szam;
for(double i = -1; i <= 1; i = i+0.1)
{   printf("%.4f\n", i);
    printf("%.4f\n", kob(i));
    printf("%.4f\n", abszolut(i));
    printf("%.4f\n\n", sin(i));

}
    return 0;
}
double kob(double a)
{
    return a*a*a;
}

double abszolut(double a)
{

    if(a<0)
    return a*(-1);
    return a;
}
