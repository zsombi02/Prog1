#include <stdio.h>
#include <stdlib.h>

int *hol_van(int x, int tomb[], int meret)
{
    for(int *p = tomb; p < tomb + meret; p++)
    {
        if(*p == x)
            return p;

    }
    return NULL;

}

int main()
{
    int t[10] = { 2, 4 ,6, 7, 8, 9, 10, 32 };

    int *ind = hol_van(6, t, 10);
    if(ind != NULL)
        printf("%p  %d  \n", ind, *ind);
        printf("%d", ind - t);

    return 0;
}
