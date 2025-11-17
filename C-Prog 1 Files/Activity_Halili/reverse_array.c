#include <stdio.h>

int main ()
{

    int numbers[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21}, i;
    for (i = 8; i >= 0; i--){
        printf("%d\t", numbers[i]);
    }


    return 0;
}