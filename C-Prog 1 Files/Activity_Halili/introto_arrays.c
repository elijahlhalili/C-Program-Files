#include <stdio.h>
#include <stdlib.h>
#define N 10

int main ()
{
    system("cls");

    /*
        - Array is used to store many variables that are of same type only
        - Aata structure is a format of organizing and storing data
            and each data structure is designed to organize data to suit a specific purpose
        - One dimensional array = the simplest form of array
    */

    // data_type (e.g. int) name_of_array (e.g arr) and [number elements]
    int arr[5];
    // array_name (e.g arr) [INDEX (the positon of your array) = e.g. 2]
    arr[2];

        //  EXAMPLE:
    int number[5] = {5, 10, 15, 20, 25};
    printf("%d\n", number[0]);
        //reminder: that the first number always start with 0, so the 5 there is 0 for index
        // never exceed to the number of elements
        
        // we used macro (e.g. N) to represent the value of the index
        // to use that, we write "#define N 10" in the upper
    int a[N], i;
    for (i = 0; i < N; i++){
        printf("Enter the nuput for index %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nArray elements are as follows:\n");
    for (i = 0; i < N; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}