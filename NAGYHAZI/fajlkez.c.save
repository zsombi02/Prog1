#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "debugmalloc.h"
#include <ctype.h>
#include "palyakez.h"
#include "fajlkez.h"

Lista* letrehoz()
{
	FILE * fp;
	fp = fopen("statisztikak.txt", "r");
	if (fp == NULL)
	{
		perror("a fajl nem talalhato/megnyitas sikertelen");
		return NULL;
	}

	Lista *fej = NULL;
	Lista *vege = NULL;
	Lista meccs;

	while (fscanf(fp, "%[^,],%[^,],", meccs.gyoztes, meccs.vesztes) != EOF)
	{
		Lista * merkozes;
		merkozes = (Lista*) malloc(sizeof(Lista));
		strcpy(merkozes->gyoztes, meccs.gyoztes);
		strcpy(merkozes->vesztes, meccs.vesztes);
		merkozes->kov = NULL;

		if (fej == NULL)
		{
			fej = merkozes;
			vege = merkozes;
		}
		else
		{
			vege->kov = merkozes;
			vege = merkozes;
		}
	}

	//Lista * mozgo;
	//    for(mozgo = fej; mozgo != NULL; mozgo = mozgo->kov)
	//    printf("%s,%s,", mozgo->gyoztes, mozgo->vesztes);
	fclose(fp);
	return fej;

}

Lista* ujelem(Lista *fej, Lista meccs)
{
	Lista * uj;
	uj = (Lista*) malloc(sizeof(Lista));
	strcpy(uj->gyoztes, meccs.gyoztes);
	strcpy(uj->vesztes, meccs.vesztes);
	uj->kov = NULL;
	if (fej == NULL)
	{
		fej = uj;
	}
	else
	{
		Lista *mozgo = fej;
		while (mozgo->kov != NULL)
		{
			mozgo = mozgo->kov;

		}

		mozgo->kov = uj;
	}

	return fej;

}

void mentes(const char *filename, Lista *fej)
{
	FILE * fp;
	fp = fopen(filename, "w");
	if (!fp)
	{
		perror("fopen");
		return;
	}

	Lista * mozgo;
	for (mozgo = fej; mozgo != NULL; mozgo = mozgo->kov)
		fprintf(fp, "%s,%s,", mozgo->gyoztes, mozgo->vesztes);

	fclose(fp);
}
