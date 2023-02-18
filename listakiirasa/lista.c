#include "lista.h"
#include <stdlib.h>
#include <stdio.h>


Lista *lista_letrehoz(void) {
    int szamok[] = { 8, 14, 13, 17, 1, 19, 16, 5, 3, 11, 2, 15, 9, 10, 6, 22, 4, 7, 18, 20, -1 };
    Lista *l = NULL;
    int i;
    for (i = 0; szamok[i] != -1; ++i)
    {
        Lista *u = (Lista*)malloc(sizeof(Lista));
        u->kov = l;
        u->adat = szamok[i];
        l = u;

    }

    return l;
}

void listakiir(Lista *l)
{
    Lista *p;
    for(p=l;p!=NULL;p=p->kov) printf("%d ",p->adat);
}
void listafree(Lista *l)
 {
    Lista *p=l;
    while (p!=NULL)
    {
        Lista *tmp = p->kov;
            free(p);
            p=tmp;
    }
}


Lista *leleje(Lista *l,int mit)
{
    Lista *ujlista = (Lista *) malloc(sizeof(Lista));
    ujlista->adat = mit;
    ujlista->kov = l;
    return ujlista;
}
Lista *livege(Lista *l, int mit)
 {
    Lista *ujlista = (Lista *)malloc(sizeof(Lista));

    ujlista->adat = mit;
    ujlista->kov = NULL;
            if (l == NULL)
               return ujlista;
        else
            {
            Lista *p=l;
            while (p->kov!=NULL) p = p->kov;
            p->kov = ujlista;
            return l;
    }
}
int hossz(Lista *l)
{
    Lista *p=l;
    int hossz=0;

    while (p!=NULL) {
        p=p->kov;
        hossz++;
    }
    return hossz;
}

Lista *listakeres(Lista *l,int mit)
{
    Lista *p;

    for (p=l; p != NULL; p = p->kov)
        if (p->adat == mit)
            return p;

    return NULL;
}
