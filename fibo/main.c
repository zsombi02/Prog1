#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 40;
    printf("%d", fib(n));
    return 0;
}
int fib(int n)
{
    if (n < 2)
return n;
        else
            return fib(n-2) + fib(n-1);
}
