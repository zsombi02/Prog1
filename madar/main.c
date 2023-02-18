#include <stdio.h>
#include <stdlib.h>
int mgh (char);
int main(void) {
    char c;

    while (scanf("%c", &c) != EOF) {
            int n= mgh(c);
        if(n== 1)
            printf("%cv%c", c,c);
        if(n==2)
            printf("%cv%c", c, tolower(c) );
        if(n==3)
            printf("%c", c);
    }

    return 0;
}


int mgh (char c)
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return (1);
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return (2);
        else
        return (3);
    }
