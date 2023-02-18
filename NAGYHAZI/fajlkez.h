#ifndef FAJLKEZ_H_INCLUDED
#define FAJLKEZ_H_INCLUDED

typedef struct Lista
{
	char gyoztes[20];
	char vesztes[20];
	struct Lista * kov;
}
Lista;

Lista* letrehoz();
Lista* ujelem(Lista *fej, Lista meccs);
void mentes(const char *filename, Lista *fej);

#endif // FAJLKEZ_H_INCLUDED
