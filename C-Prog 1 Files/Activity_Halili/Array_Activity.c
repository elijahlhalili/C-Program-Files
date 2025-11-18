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
                printf("%d\t", num[i]);
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
            printf("\nLargest = %d\n", largest);
            printf("Smallest = %d\n", smallest);

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

        break;

        default:
            printf("Please only enter 1-3 from the MENU!");
        break;

            }

    return 0;
}