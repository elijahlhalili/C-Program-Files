#include <stdio.h>
#include <unistd.h>

int main ()
{

    int a;
    a = 1;
    while(a<=5){
        printf("\n%d", a);
        sleep(1);
        a++;
    }





    return 0 ;
}