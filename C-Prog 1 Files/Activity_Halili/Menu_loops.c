//Programmed by: Elijah L. Halili - BSCS A

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() 
{
    system("cls");

    int choice, num, a, i;
    char repeat;

    do {
        printf("        MENU CHOICES        \n");
        printf("[1] - Increasing number (Even number)\n");
        printf("[2] - Increasing number (Odd number)\n");
        printf("[3] - Decreasing number (Even number)\n");
        printf("[4] - Decreasing number (Odd number)\n");

        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);
        if (choice > 4){
            printf("INVALID CHOICE");
        } break;

        printf("Enter a number between 1 and 50: ");
        scanf("%d", &a);
        if (a > 50){
            printf("INVALID NUMBER!");
        } break;

        printf("\nResult:\n");

        switch (choice) {
            case 1:
                for (a = a; a < 50; a+=1) {
                    if (a % 2 == 0){
                        printf("%d ", a);
                        Sleep(100);
                    }
                }
                break;
            case 2:
                for (a = a; a < 50; a++){
                    if (a % 2 != 0){
                        printf("%d ", a);
                        Sleep(100);
                    }
                }
                break;
            case 3:
                for (a = a; a > 1; a--) {
                    if (a % 2 == 0){
                        printf("%d ", a);
                        Sleep(100);
                    }
                }
                break;
            case 4:
                for (a = a; a > 1; a--) {
                    if (a % 2 != 0){
                        printf("%d ", a);
                        Sleep(100);
                    }
                }
                break;

            default:
                printf("Invalid choice! Please enter only 1-4\n");
        }

        printf("\n\nWould you like to try again? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("\nProgram ended. Thank you!\n");
    return 0;
}
