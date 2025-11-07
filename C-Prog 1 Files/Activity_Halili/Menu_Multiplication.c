#include <stdio.h>

int main ()
{

    int number, choice;
    char repeat;

    do{

    printf("\n==========MENU==========");
    printf("\n[1] MULTIPLICATION TABLE (1-10 only)\n");
    printf("[2]- TABLE FOR SPECIFIC NUMBER\n");
    printf("ENTER A NUMBER: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            for (int a = 1; a <= 10; a++){
                for (int i = 1; i <=10; i++){
                    printf("%d\t", a * i);
                }
            printf("\n");
            }
    
        case 2:
            printf("\nWhat number would you like to see the multiplication table of: ");
            scanf("%d", &number);
    
            if (number > 0)
            {
                printf("MULTIPLICATION TABLE OF: %d\n", number);
                for (int b = 1; b <= 10; b++)
                {
                    printf("%d\n", number * b);
                }
            }
        break;
    }

    printf("\nWould you like to try again? (Y/N): ");
    scanf(" %c", &repeat);

    }
    while (repeat == 'Y' || repeat == 'y');

    return 0;
}