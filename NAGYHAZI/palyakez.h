#ifndef PALYAKEZ_H_INCLUDED
#define PALYAKEZ_H_INCLUDED

typedef struct palyak
{
	int elet;
	int palya[10][20];
	int hajok[10][20];
}
palyak;

typedef struct hajo
{
	char irany;
	char x;
	int xx;
	int y;
	int hossz;
}
hajo;

typedef struct loves
{
	char x;
	int xx;
	int y;
}
loves;

typedef struct Lovesek
{
	char x;
	int y;
	int talalt;
	int jatekos;
	struct Lovesek * kov;
}
Lovesek;

void feltolt(int tomba[][20], int tombb[][20]);
void rajz(int tomb[][20]);
void palyak_inicializal(palyak *p);
void betolt(int hajok[10][20], hajo *hajo);
void hajotolt(hajo *hajo, palyak *egy);
Lovesek* ujloves(Lovesek *eleje, char x, int y, int talalt, int jatekos);
void shot(loves *loves, palyak *lovo, palyak *kapo, Lovesek **eleje, int jatekos);

#endif // PALYAKEZ_H_INCLUDED
