#include <stdio.h>

int main ()
{

    for (int a = 10; a >= 1 ; --a){
        printf("\n%d", a);

        for (int b = a - 1; b >= 1; --b){
            printf("\t%d", b);
        }
        
    }


    return 0;
}