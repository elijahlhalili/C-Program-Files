#include <stdio.h>

int main ()
{

    int num[100], a, b, c;
    int found = 0;

    printf("Input number of integers: ");
    scanf("%d", &a);

    for (b = 0; b < a; b++){
        printf("Input %d numbers: ", a);
        scanf("%d", &num[b]);
    }

    printf("Input a number to search: ");
    scanf("%d", &c);
    
    for (b = 0; b < a; b++){
        if (c == num[b]){
            printf("%d is in index %d", c, b);
            found = 1;
        }
    }
    if (!found){
        printf("%d is NOT found in the array.\n", c);
    }


    return 0;
}