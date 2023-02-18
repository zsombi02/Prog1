#include <stdio.h>
#include <stdlib.h>

void ielore(int *p, int m){
    for(int i=0; i<m; i++){
        printf("%d ", p[i]);
    }
}

void ihatra(int *p, int m){
    for(int i=(m-1); i>=0; i--)
    {
        printf("%d ", p[i]);
    }
}

void relore(int *p, int m)
    {
    if(m==0)
    {
        return;
    }
    printf("%d ", p[0]);

    relore(p+1,m-1);
    }

void rhatra(int *p, int m)
{
    if(m==0){
        return;
    }
    printf("%d ", p[m-1]);

    rhatra(p, m-1);
}

int main(void)
{
    int t[10]={3,6,55,34,54,77,81,2,9,100};
    int u[5]={2,5,7,11,34};
    ielore(t, 10);
    printf("\n");
    ihatra(t, 10);
    printf("\n");
    relore(t, 10);
    printf("\n");
    rhatra(t, 10);
    printf("\n");
    ielore(u, 5);
    printf("\n");
    ihatra(u, 5);
    printf("\n");
    relore(u, 5);
    printf("\n");
    rhatra(u, 5);
    return 0;
}
