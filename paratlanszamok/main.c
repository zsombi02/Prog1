#include <stdio.h>
#include <stdlib.h>

int main()
{
    int also, felso;
    printf("Add meg a szamokat");
    scanf("%d", &also);
    scanf("%d", &felso);
    if(felso<also)
    {
        int temp = also;
        also = felso;
        felso = temp;
        ~temp;
    }
    while(also<=felso)
   {

    if(also% 2==1)
        printf("%d   ", also);
    also++;
   }

    return 0;
}
