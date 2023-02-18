#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "debugmalloc.h"
#include <ctype.h>
#include "palyakez.h"
#include "fajlkez.h"
//ez a fgv elokesziti a jatekot, azzal hogy létrehozza a pályának a mezõit, egyszerre 1 játékos 2 pályáját tudja legenerálni, ezért kétszer kell meghívni a játék legelején
void feltolt(int tomba[][20], int tombb[][20])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j = j + 2)
		{
			tomba[i][j] = 0;
			tomba[i][j + 1] = 1;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j = j + 2)
		{
			tombb[i][j] = 0;
			tombb[i][j + 1] = 1;
		}
	}
}

//kirajzolja a kért pályát
void rajz(int tomb[][20])
{
	printf("\n");
	printf("   A B C D E F G H I J \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%2d ", i + 1);
		for (int j = 0; j < 20; j++)
		{
			if (tomb[i][j] == 0)
				printf("-");
			if (tomb[i][j] == 1)
				printf(" ");
			if (tomb[i][j] == 2)
				printf("O");
			if (tomb[i][j] == 3)
				printf("M");
			if (tomb[i][j] == 4)
				printf("T");
		}

		printf("\n");
	}

	printf("\n");
}
void palyak_inicializal(palyak *p)
{
	p->elet = 0;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			p->hajok[i][j] = p->palya[i][j] = 0;
		}
	}
}

Lovesek* ujloves(Lovesek *eleje, char x, int y, int talalt, int jatekos)
{
	Lovesek * uj;
	uj = (Lovesek*) malloc(sizeof(Lovesek));
	uj->x = x;
	uj->y = y;
	uj->talalt = talalt;
	uj->kov = NULL;
	uj->jatekos = jatekos;
	if (eleje == NULL)
	{
		eleje = uj;
	}
	else
	{
		Lovesek *mozgo = eleje;
		while (mozgo->kov != NULL)
		{
			mozgo = mozgo->kov;
		}

		mozgo->kov = uj;
	}

	return eleje;

}

//ez a fgv egy lövést végez el, és cserél ki egy elemet a céltömbökben, attól függõen hogy talált e vagy sem
void shot(loves *loves, palyak *lovo, palyak *kapo, Lovesek **eleje, int jatekos)
{
	int szamlalo = 0;
	while (szamlalo < 1)
	{
		printf("Adj meg egy mezot (pl a3) \n");
		scanf("%c%d", &(loves->x), &(loves->y));
		int x;
		while ((x = fgetc(stdin)) != '\n');
		loves->x = tolower(loves->x);
		loves->xx = loves->x - 'a';
		loves->xx = loves->xx * 2;

		// printf("%c %d %d \n", loves->x, loves->xx, loves->y);
		if (loves->xx < 20 && loves->y < 11 && loves->y > 0)
		{
			switch (kapo->hajok[loves->y - 1][loves->xx])
			{
				case 0:
					lovo->palya[loves->y - 1][loves->xx] = 3;
					*eleje = ujloves(*eleje, loves->x, loves->y, 0, jatekos);
					break;
				case 2:
					lovo->palya[loves->y - 1][loves->xx] = 4;
					kapo->hajok[loves->y - 1][loves->xx] = 4;
					*eleje = ujloves(*eleje, loves->x, loves->y, 1, jatekos);
					break;
				default:
					printf("ervenytelen\n");
			}

			szamlalo++;
		}
		else
		{
			printf("hibas ertekek \n ");
			getchar();
		}
	}
}
