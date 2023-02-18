#include <stdio.h>
#include <stdlib.h>

void szamrendszervalto(int x, int oszto){
    if(x==0){
        return;
    }
    int maradek=x%oszto;
    szamrendszervalto(x/oszto,oszto);
    printf("%d",maradek);
}

int main(void){
    int x, szamrend;
        printf("Atvaltando ertek ");
        scanf("%d",&x);

        printf("szamrendszer ami valtani: ");
        scanf("%d",&szamrend);

    printf("A szam %d-es szamrendszerbe valtva ",szamrend);
    szamrendszervalto(x,szamrend);
    return 0;
}
