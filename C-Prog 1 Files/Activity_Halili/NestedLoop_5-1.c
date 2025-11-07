// Programmed by: Elijah L. Halili - BSCS 1A
#include <stdio.h>

int main ()
{

    int i, j;

    for (i =5; i>=1; --i)
    {
        printf("\n%d ", i);
            for (j=i-1; j>=1; --j)
            {
                printf("%d ", j);
            }
    }

    return 0;
}