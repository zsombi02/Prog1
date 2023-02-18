#include <stdio.h>
#include <stdlib.h>

typedef struct Koord
{
int x, y;
} Koord;

enum irany{fel, jobb, le, bal};
enum lepes{rossz, kijarat, kincs, ures};

int kincsszam(char tomb[][10], int sorok)
{
    int i, j, db=0;
    for (i=0; i<sorok; i++)
        for (j=0; j<10; j++)
            if (tomb[i][j]=='$')
                db++;
    return db;
}


void rajzol(char tomb[][10], int sorok)
{
    int i, j;
    for (i=0; i<sorok; i++)
    {
        for (j=0; j<10; j++) printf("%c", tomb[i][j]);
        printf("\n");
    }
}


Koord pozicio(char tomb[][10], int sorok)
{
    int i, j;
    Koord k;
    for (i=0; i<sorok; i++)
    {
        for (j=0; j<10; j++)
        {
            if (tomb[i][j]=='@')
            {
                k.x=j;
                k.y=i;
                return k;
            }
        }
    }
    k.x=k.y=-1;
    return k;
}




int szabad(char tomb[][10], int sorok, enum irany irany)
{
    Koord k=pozicio(tomb, 10);

    if (irany==fel  && k.y>0  && tomb[k.y-1][k.x]!='#') return 1;
    if (irany==le   && k.y<sorok-1 && tomb[k.y+1][k.x]!='#') return 1;
    if (irany==bal  && k.x>0  && tomb[k.y][k.x-1]!='#') return 1;
    if (irany==jobb && k.x<10-1  && tomb[k.y][k.x+1]!='#') return 1;

    return 0;

}

enum lepes leptet(char tomb[][10], int sorok, enum irany irany)
{
    Koord uj = pozicio(tomb, sorok);
    Koord ujhely=uj;
    char rajta;

    if (!szabad(tomb, sorok, irany))
        return rossz;
    switch(irany)
    {
        case fel: ujhely.y--;
            break;
        case le:  ujhely.y++;
            break;
        case bal: ujhely.x--;
            break;
        default:  ujhely.x++;
            break;
    }

    tomb[uj.y][uj.x]=' ';
    rajta = tomb[ujhely.y][ujhely.x];
    tomb[ujhely.y][ujhely.x] = '@';
    if (rajta=='$')
    return kincs;

    if (ujhely.x==0 || ujhely.x==9 || ujhely.y==0 || ujhely.y==9) return kijarat;
    return ures;
}

int main()
{

    char lab[10][10] =
    {
        {'#', '#', '#', '#', '#', '#', ' ', '#', '#', '#'},
        {'#', '$', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', '#', '#', '#', ' ', '#', '#', '#'},
        {'#', ' ', '#', ' ', ' ', ' ', ' ', '#', '$', '#'},
        {'#', ' ', '#', '#', '$', '#', ' ', '#', ' ', '#'},
        {'#', '@', ' ', '#', '#', '#', ' ', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', '$', '#', ' ', ' ', ' ', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    int osszkincs, megtalalt;
    char c;
    enum irany ir;
    enum lepes eredmeny;

    osszkincs=kincsszam(lab, 10);
    megtalalt=0;
    do
    {   system("cls");
        printf("Kincsek: %d/%d\n", megtalalt, osszkincs);
        rajzol(lab, 10);

        do
        {
            c=getchar();
        } while (c!='w' && c!='a' && c!='s' && c!='d');

        switch(c)
        {
            case 'w': ir=fel; break;
            case 'a': ir=bal; break;
            case 's': ir=le;  break;
            case 'd': ir=jobb; break;
        }

        eredmeny=leptet(lab, 10, ir);

        if (eredmeny==kincs) megtalalt++;

    } while (eredmeny!=kijarat);
    system("cls");
    printf("Jatek vege!\n");
    rajzol(lab, 10);

    return 0;
}
