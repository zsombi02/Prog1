#include <stdio.h>
#include <stdlib.h>

void kiiras(int n)
{
    if(n/1000 != 0)
        kiiras(n/1000);
    if(n/1000 == 0)
        printf("%d ", n% 1000);
    else
        printf("%03d ", n %1000);

    if(n == 0)

return;
}



int main(void)
{
    int szam;
    printf("mit irjon ki a gep?: \n");
    scanf("%d", &szam);

    kiiras(szam);

    return 0;
}

