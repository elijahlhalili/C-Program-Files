#include <stdio.h>

int main ()
{


    int arr[50], i, b;

    printf("How many element you want to enter: \n");
    scanf("%d", &b);

    printf("Enter %d numbers to store in array: \n", b);
    for (i = 0; i < b; i++){
        scanf("%d", &arr[i]);
    }

    printf("The elements of you array are: \n");
    for (i = 0; i < b; i++){
        printf("Element of postion %d is %d\n", i, arr[i]);
    }

    return 0;
}