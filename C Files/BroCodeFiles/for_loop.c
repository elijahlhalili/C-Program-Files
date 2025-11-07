#include <stdio.h>
#include <unistd.h>

int main ()
{

   // for loop
    int a;
    for (a = 15; a >= 1; a-=1){
        printf("\n%d", a);
        sleep(1);
    }



    return 0;
}