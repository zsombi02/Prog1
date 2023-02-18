#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int darab=1;
    double szam=0;
    double *tomb;
    double *ujtomb;
    while(szam!=-1)
    {
        tomb= (double*)malloc (darab*sizeof(double));
        for(int i=0; i<darab; i++){
            tomb[i]=ujtomb[i];
        }
        scanf("%lf", &szam);
        tomb[darab-1]=szam;
        if(szam!=-1)
        {
        ujtomb=(double*)malloc(darab*sizeof(double));
            for(int i=0; i<darab; i++)
            {
                ujtomb[i]=tomb[i];
            }
        darab++;
        free(tomb);

        }
    }
    for(int i=(darab-2); i>=0; i--){
        printf("%lf \n", ujtomb[i]);
    }
    free(ujtomb);
    return 0;
}
