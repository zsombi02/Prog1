#ifndef LISTA_H
#define LISTA_H


typedef struct Lista {
int adat; struct Lista *kov;
} Lista;

    Lista *lista_letrehoz(void);
        void listakiir(Lista *l);
        void listafree(Lista *l);

    Lista *leleje(Lista *l, int mit);
    Lista *livege(Lista *l, int mit);

        int hossz(Lista *l);
        Lista *listakeres(Lista *l, int mit);




#endif
