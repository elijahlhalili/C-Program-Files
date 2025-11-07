#include <stdio.h>
#include <unistd.h>

int main ()
{
    // decreasing odd number from 15 to 1
    int odd;
    odd = 15;

    while (odd >= 1){
        printf("%d\n", odd);
        sleep(1);
        odd-=2;
    }



    return 0;
}