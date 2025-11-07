#include <stdio.h>
#include <unistd.h>

int main ()
{
    // decreasing odd number from 15 to 1
    int odd;

    for (odd = 15; odd >  0; odd-=2)
    {
        printf("%d\n", odd);
        sleep(1);
    }



    return 0;
}