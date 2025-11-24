#include <stdio.h>

int main ()
{
    int b, i, num[50], largest, smallest;

    printf("How many integers do you want? \n");
            scanf("%d", &b);

            printf("Enter %d integers:\n", b);
            for (i = 0; i < b; i++){
                scanf("%d", &num[i]);
            }
            printf("Your integers:\n");
            for (i = 0; i < b; i++){
                printf("%d\t", num[i]);
            }

            largest = num[0];
            smallest = num[0];

            for (i = 0; i < b; i++){
                if (num[i] > largest){
                    largest = num[i];
                }
                if (num[i] < smallest){
                    smallest = num[i];
                }
            }
            printf("\nThe largest number is: %d\n", largest);
            printf("The smallest number is: %d\n", smallest);


    return 0;
}