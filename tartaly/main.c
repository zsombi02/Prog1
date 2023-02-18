#include <stdio.h>
#include <stdlib.h>

int main()
{
    double magassag, atmero, sugar;
    double festek;

    printf("Milyen magas?\n");
    scanf("%lf", &magassag);
    printf("Mennyi az atmero \n");
    scanf("%lf", &atmero);
    sugar= atmero/2;
    festek = (2*sugar*sugar*3.1416+magassag*2*sugar*3.1416)/2;
    printf("%f doboz festek kell \n", festek);

    return 0;
}
