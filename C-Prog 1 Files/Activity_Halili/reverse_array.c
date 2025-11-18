#include <stdio.h>

int main ()
{


    int num[50], b, i;

    printf("How many integers do you want:\n");
    scanf("%d", &b);

    printf("Enter %d integers:\n", b);
    for (i = 0; i < b; i++){
        scanf("%d", &num[i]);
    }

    printf("Original order of integers: ");
    for (i = 0; i < b; i++){
        printf("%d\t", num[i]);
    }

    printf("\nReverse order of integers: ");
    for (i = b - 1; i >= 0; i--){
        printf("%d\t", num[i]);
    }

    return 0;
}