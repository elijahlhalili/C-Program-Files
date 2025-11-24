#include <stdio.h>

int main ()
{

    int menu, num[50], i, b, sum = 0, largest, smallest;
    float ave = 0;

    printf("\tMENU\n");
    printf("[1] - Sum and Average of an Array\n");
    printf("[2] - Find the Largest and Smallest Number\n");
    printf("[3] - Reverse the Elements of an Array\n");

    printf("Enter a Number: ");
    scanf("%d", &menu);

    switch (menu){
        case 1:
            printf("How many integers do you want? \n");
            scanf("%d", &b);

            printf("Enter %d integers: \n", b);
            for (i = 0; i < b; i++){
                scanf("%d", &num[i]);
            }

            printf("Your integers:\n");
            for (i = 0; i < b; i++){
                printf("%4d", num[i]);
            }

            for (i = 0; i < b; i++){
                sum += num[i];
            }
            for (i = 0; i < b; i++){
                ave = sum / (float)b;
            }

            printf("\nSum: ");
            for (i = 0; i < b; i++){
                printf("%d", num[i]);
                if (i < b - 1){
                    printf(" + ");
                }
            }
            printf(" = %d\n", sum);

            printf("Average: %d / %.2f = %.2f", sum, (float)b, ave);

        /*
        Guide Questions:
        1. There will be a waste of unused memory because we only prompted the user 5 times
        2. It add all the values from the inputs of the user then divide it by the number of inputs the user did
        3. Float, for decimals and more accurate value.
        */

        break;

        case 2:
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
        /*
        Guided Questions:
        1. So that the if statement has something to compare with
        2. The program still works fine
        3. Yes, I will just add another variable to store the second largest and update the second largest by checkiing if its smaller than the largest and larger than the current num[i]
         */

        break;

        case 3:
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

        /*
        Guide Question:
        1. If you have num[5], to access the last element, you will need to write num[4] instead because of the null terminator at the end
        2. The same number of elements you have in the array
        3. Yes, instead of printf, you will first need declare a new array, then assigning each element using the for loop
        */
        break;

        default:
            printf("Please only enter 1-3 from the MENU!");
        break;

            }

    return 0;
}