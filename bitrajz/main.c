#include <stdio.h>
#include <stdlib.h>

int main(void){
        unsigned long szmk[9] = { 0U, 1931988508U, 581177634U, 581374240U, 581177632U, 581177634U, 1919159836U, 0U };
    for(int i=0; i<9; i++)
        {
        //szmk[ i ]  = szmk[i]&65535;
        //szmk[ i ] = szmk[i] & ~65535;
        //szmk[ i ] = szmk[i] | 65535;
        //szmk[ i ] = szmk[i] | ~65535;
        //szmk[ i ] = szmk[i] ^ 65535;
        //szmk[ i ] = szmk[i] ^ ~65535;
        for(int j=31; j>=0; j--)
            {
                if((szmk[i]>>j&1)!=0)
                {
                    printf("#");
                }
                else printf(" ");
            }
        printf("\n");
        }
    return 0;
}
