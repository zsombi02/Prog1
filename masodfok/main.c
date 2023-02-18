#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c;
   printf("a:");
   scanf("%lf", &a);
   printf("b:");
   scanf("%lf", &b);
   printf("c:");
   scanf("%lf", &c);

   double disz;
   disz = b*b-4*a*c;
    if (disz == 0)
        {printf("Az egyenlet egyetlen megoldasa: %f \n", -b / (2*a));}
    if (disz <0)
        {printf(" Nincs valos gyok! \n");}
    if (disz>0)
        {printf("az egyenlet ket megoldasa: \n x1= %f \n x2 = %f \n", (-b+sqrt(disz))/ (2*a), (-b-sqrt(disz))/(2*a));}
    return 0;
}
