#include <stdio.h>

int main() {
    int choice, number;
    int i, j;
    char repeat;

    do {
        printf("\n==========MENU==========");
        printf("\n[1] MULTIPLICATION TABLE\n");
        printf("[2]- TABLE FOR SPECIFIC NUMBER\n");
        printf("ENTER A NUMBER: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("MULTIPLICATION TABLE (1 to 10):\n");
                for (i = 1; i <= 10; i++) {
                    for (j = 1; j <= 10; j++) {
                        printf("%4d", i * j);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("What number would you like to see the multiplication table of: ");
                scanf("%d", &number);

                printf("MULTIPLICATION TABLE OF %d:\n", number);
                for (j = 1; j <= 10; j++) {
                    printf("%d x %d = %d\n", number, j, number * j);
                }
                break;

            default:
                printf("Invalid choice! Please enter 1 or 2.\n");
                break;
        }

        printf("Do you want to try again? (Y/N): ");
        scanf(" %c", &repeat); 


    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}