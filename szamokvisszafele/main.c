#include <stdio.h>
#include <stdlib.h>

int main()
{   int darab = 0;
    double szam = 0;
    printf("hány szam legyen brooo \n");
    scanf("%d",  &darab);
    double *tomb=(double*)malloc(darab*sizeof(double));
    for(int i = 0; i<darab; i++)
    {
        scanf("%lf", &szam);
        tomb[i]= szam;

    }
    for(int i =darab-1; i >=0; i--)
        printf("%lf \n", tomb[i]);

    free (tomb);
    return 0;
}
