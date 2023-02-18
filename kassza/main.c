#include <stdio.h>
#include <stdlib.h>

int main()
{   int kasszak[32] = { 0 };
    int max = 0, ossz = 0;
    int maxhelye;
    printf("add be a kasszakat");
    int sorszam;
    scanf("%d", &sorszam);
    while(sorszam != 0)
    {
        kasszak[sorszam]++;
        ossz++;
        scanf("%d", &sorszam);
    }

    for(int i = 0; i < 32; i++)
    {
        if(max < kasszak[i])
        {
            max = kasszak[i];
            maxhelye = i;
        }

    }
    printf("%d  %f%%",maxhelye, 100.0*max/ossz);
    return 0;
}
