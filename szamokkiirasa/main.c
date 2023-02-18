#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int x=1;
    printf("meddig irjam ki a szamokat: \n");
    scanf("%d", &n);
    while (x<=n)
    {
        printf("%d \n", x);
        x++;

    }
    printf(" . \n");
    return 0;
}
