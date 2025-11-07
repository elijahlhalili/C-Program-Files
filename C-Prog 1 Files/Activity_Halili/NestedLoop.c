#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("cls");

    int x, y, num;
    char repeat;

    

    do{
        printf("Input a number for multiplication table: ");
        scanf("%d", &num);

        for (num = num; num <= 10; x++)
        {
            for (y = num; y <= 10; ++y)
            {
                printf("\t%d ", num*y);
                Sleep(100);
            } break;
            printf("\n");
        }
        printf("\n\nWould you like to try again? (y/n): ");
        scanf(" %c", &repeat);
    }
    while (repeat == 'y' || repeat == 'Y');



    return 0;
}