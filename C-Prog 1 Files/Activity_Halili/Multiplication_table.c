#include <stdio.h>

int main ()
{

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int number = 1; number <= 12; number++){
        for(int b = 1; b <= 12; b++){
            printf("%d\t", number*b );
        }
    printf("\n");
    }



    return 0;
}