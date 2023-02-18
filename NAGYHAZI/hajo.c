#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>
#include "debugmalloc.h"
#include <ctype.h>
#include "palyakez.h"

//ez egy segédfüggvény a hajok betoltesehez, ez a fgv helyezi be oket a palyara
void betolt(int hajok[10][20], hajo *hajo)
{
	if (hajo->irany == 'v' || hajo->irany == 'V')
	{
		if (hajo->xx <= 20 - (hajo->hossz *2))
		{
			for (int i = hajo->xx; i < (hajo->xx + (hajo->hossz *2)); i = i + 2)
				hajok[hajo->y - 1][i] = 2;
		}
	}

	if (hajo->irany == 'f' || hajo->irany == 'F')
	{
		if (hajo->y - 1 <= 10 - (hajo->hossz))
		{
			for (int i = hajo->y - 1; i < (hajo->y + (hajo->hossz) - 1); i++)
				hajok[i][hajo->xx] = 2;
		}
	}
}

//ez a fgv ellenõrzi, hogy mennyi és milyen hajó kerül betöltésre
void hajotolt(hajo *hajo, palyak *egy)
{
	int elerheto[] = { 2,
		3,
		3,
		4,
		4,
		5
	};
	int vanhajo = 21;

	while (vanhajo > 0)
	{
		system("cls");
		printf("elerheto hajok:  ");

		for (int i = 0; i < 6; i++)
			printf("%d  ", elerheto[i]);

		printf("\nadd meg a hajot (pl: v a3 5) ");
		rajz(egy->hajok);
		hajo->hossz = 0;
		scanf("%c %c %d %d", &hajo->irany, &hajo->x, &hajo->y, &hajo->hossz);
		int x;
		while ((x = fgetc(stdin)) != '\n');

		hajo->x = tolower(hajo->x);
		hajo->xx = hajo->x - 'a';
		int utkozes = 0;
		if (hajo->irany == 'v' || hajo->irany == 'V')
		{
			if (hajo->xx <= 20 - (hajo->hossz *2))
			{
				for (int i = hajo->xx; i < (hajo->xx + (hajo->hossz *2)); i = i + 2)
					if (egy->hajok[hajo->y - 1][i] == 2)
						utkozes++;
			}
		}

		if (hajo->irany == 'f' || hajo->irany == 'F')
		{
			if (hajo->y - 1 <= 10 - (hajo->hossz))
			{
				for (int i = hajo->y - 1; i < (hajo->y + (hajo->hossz) - 1); i++)
					if (egy->hajok[i][hajo->xx] == 2)
						utkozes++;
			}
		}

		if (hajo->y > 0 && hajo->y < 11 && ((hajo->irany == 'v' && hajo->hossz * 2 < 11) || (hajo->irany == 'f' && hajo->hossz < 6)) && hajo->hossz > 0 && hajo->xx < 10 && utkozes == 0)
		{
			int igen = 1;
			for (int i = 0; igen == 1; i++)
			{
				if ((hajo->hossz) == elerheto[i])
				{
					elerheto[i] = 0;
					igen = 0;
				}
			}

			hajo->x = tolower(hajo->x);
			hajo->xx = hajo->x - 'a';
			hajo->xx = hajo->xx * 2;
			betolt(egy->hajok, hajo);
			vanhajo = vanhajo - (hajo->hossz);
		}
		else
		{
			printf("hibas adatok");
			getchar();
			system("cls");
		}
	}

	if (vanhajo == 0)
	{
		system("cls");
		rajz(egy->hajok);
	}
}

